;------------------------------------------------------------------------------
;
; Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   CopyMem.asm
;
; Abstract:
;
;   memcpy function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; VOID *
; memcpy (
;   OUT     VOID                      *DestinationBuffer,
;   IN      CONST VOID                *SourceBuffer,
;   IN      UINTN                     Length
;   );
;------------------------------------------------------------------------------
memcpy  PROC    USES    rsi rdi
    mov     rax, rcx                    ; rax <- Destination as return value
    cmp     rdx, rcx                    ; if Source == Destination, do nothing
    je      @CopyMemDone
    cmp     r8, 0                       ; if Count == 0, do nothing
    je      @CopyMemDone
    mov     rsi, rdx                    ; rsi <- Source
    mov     rdi, rcx                    ; rdi <- Destination
    lea     r9, [rsi + r8 - 1]          ; r9 <- End of Source
    cmp     rsi, rdi
    jae     @F
    cmp     r9, rdi
    jae     @CopyBackward               ; Copy backward if overlapped
@@:
    mov     rcx, r8
    and     r8, 7
    shr     rcx, 3                      ; rcx <- # of Qwords to copy
    jz      @CopyBytes
    DB      49h, 0fh, 7eh, 0c2h         ; movd r10, mm0 (Save mm0 in r10)
@@:
    DB      0fh, 6fh, 06h               ; movd mm0, [rsi]
    DB      48h, 0fh, 7eh, 07h          ; movd [rdi], mm0
    add     rsi, 8
    add     rdi, 8
    loop    @B
    DB      49h, 0fh, 6eh, 0c2h         ; movd mm0, r10 (Restore mm0)
    jmp     @CopyBytes
@CopyBackward:
    mov     rsi, r9                     ; rsi <- End of Source
    lea     rdi, [rdi + r8 - 1]         ; rdi <- End of Destination
    std                                 ; set direction flag
@CopyBytes:
    mov     rcx, r8
    rep     movsb                       ; Copy bytes backward
    cld
@CopyMemDone:   
    ret
memcpy  ENDP

    END

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
;   CopyMem function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; VOID
; EfiCommonLibCopyMem (
;   OUT     VOID                      *Destination,
;   IN      VOID                      *Source,
;   IN      UINTN                     Count
;   );
;------------------------------------------------------------------------------
EfiCommonLibCopyMem  PROC    USES    rsi rdi
    cmp     rdx, rcx                    ; if Source == Destination, do nothing
    je      @CopyMemDone
    cmp     r8, 0                       ; if Count == 0, do nothing
    je      @CopyMemDone
    mov     rsi, rdx                    ; rsi <- Source
    mov     rdi, rcx                    ; rdi <- Destination
    lea     r9, [rsi + r8 - 1]          ; r9 <- End of Source
    cmp     rsi, rdi
    mov     rax, rdi                    ; rax <- Destination as return value
    jae     @F                          ; Copy forward if Source > Destination
    cmp     r9, rdi                     ; Overlapped?
    jae     @CopyBackward               ; Copy backward if overlapped
@@:
    xor     rcx, rcx
    sub     rcx, rdi                    ; rcx <- -rdi
    and     rcx, 15                     ; rcx + rsi should be 16 bytes aligned
    jz      @F                          ; skip if rcx == 0
    cmp     rcx, r8
    cmova   rcx, r8
    sub     r8, rcx
    rep     movsb
@@:
    mov     rcx, r8
    and     r8, 15
    shr     rcx, 4                      ; rcx <- # of DQwords to copy
    jz      @CopyBytes
@@:
    movdqu  xmm0, [rsi]                 ; rsi may not be 16-byte aligned
    movdqa  [rdi], xmm0                 ; rdi should be 16-byte aligned
    add     rsi, 16
    add     rdi, 16
    loop    @B
    jmp     @CopyBytes                  ; copy remaining bytes
@CopyBackward:
    mov     rsi, r9                     ; rsi <- Last byte of Source
    lea     rdi, [rdi + r8 - 1]         ; rdi <- Last byte of Destination
    std
@CopyBytes:
    mov     rcx, r8
    rep     movsb
    cld
@CopyMemDone:   
    ret
EfiCommonLibCopyMem  ENDP

    END

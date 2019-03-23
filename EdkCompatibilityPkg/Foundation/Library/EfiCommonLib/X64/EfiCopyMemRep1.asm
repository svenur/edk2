;------------------------------------------------------------------------------
;
; Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   EfiCopyMemRep1.asm
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
    jae     @CopyBytes
    cmp     r9, rdi
    jb      @CopyBytes                  ; Copy backward if overlapped
    mov     rsi, r9                     ; rsi <- End of Source
    lea     rdi, [rdi + r8 - 1]         ; esi <- End of Destination
    std                                 ; set direction flag
@CopyBytes:
    mov     rcx, r8
    rep     movsb                       ; Copy bytes backward
    cld
@CopyMemDone:
    ret
EfiCommonLibCopyMem  ENDP

    END


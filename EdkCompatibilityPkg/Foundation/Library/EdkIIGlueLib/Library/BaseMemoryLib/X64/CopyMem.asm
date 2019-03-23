;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   CopyMem.Asm
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
;  VOID *
;  EFIAPI
;  InternalMemCopyMem (
;    IN VOID   *Destination,
;    IN VOID   *Source,
;    IN UINTN  Count
;    )
;------------------------------------------------------------------------------
InternalMemCopyMem  PROC    USES    rsi rdi
    mov     rsi, rdx                    ; rsi <- Source
    mov     rdi, rcx                    ; rdi <- Destination
    lea     r9, [rsi + r8 - 1]          ; r9 <- End of Source
    cmp     rsi, rdi
    mov     rax, rdi                    ; rax <- Destination as return value
    jae     @F
    cmp     r9, rdi
    jae     @CopyBackward               ; Copy backward if overlapped
@@:
    mov     rcx, r8
    and     r8, 7
    shr     rcx, 3
    rep     movsq                       ; Copy as many Qwords as possible
    jmp     @CopyBytes
@CopyBackward:
    mov     rsi, r9                     ; rsi <- End of Source
    lea     rdi, [rdi + r8 - 1]         ; esi <- End of Destination
    std                                 ; set direction flag
@CopyBytes:
    mov     rcx, r8
    rep     movsb                       ; Copy bytes backward
    cld
    ret
InternalMemCopyMem  ENDP

    END

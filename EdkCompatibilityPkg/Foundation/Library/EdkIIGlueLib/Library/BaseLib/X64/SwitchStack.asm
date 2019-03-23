; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   SwitchStack.Asm
;
; Abstract:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; Routine Description:
;
;   Routine for switching stacks with 1 parameter
;
; Arguments:
;
;   (rcx) EntryPoint    - Entry point with new stack.
;   (rdx) Context       - Parameter for entry point.
;   (r8)  Context2      - Parameter2 for entry point.
;   (r9)  NewStack      - Pointer to new stack.
;
; Returns:
;
;   None
;
;------------------------------------------------------------------------------
InternalSwitchStack PROC
    mov     rax, rcx
    mov     rcx, rdx
    mov     rdx, r8
    lea     rsp, [r9 - 20h]
    call    rax
InternalSwitchStack ENDP

    END

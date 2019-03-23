;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   EnablePaging32.Asm
;
; Abstract:
;
;   AsmEnablePaging32 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .386
    .model  flat,C
    .code

;------------------------------------------------------------------------------
; VOID
; EFIAPI
; InternalX86EnablePaging32 (
;   IN      SWITCH_STACK_ENTRY_POINT  EntryPoint,
;   IN      VOID                      *Context1,    OPTIONAL
;   IN      VOID                      *Context2,    OPTIONAL
;   IN      VOID                      *NewStack
;   );
;------------------------------------------------------------------------------
InternalX86EnablePaging32 PROC
    mov     ebx, [esp + 4]
    mov     ecx, [esp + 8]
    mov     edx, [esp + 12]
    pushfd
    pop     edi                         ; save flags in edi
    cli
    mov     eax, cr0
    bts     eax, 31
    mov     esp, [esp + 16]
    mov     cr0, eax
    push    edi
    popfd                               ; restore flags
    push    edx
    push    ecx
    call    ebx
    jmp     $
InternalX86EnablePaging32 ENDP

    END

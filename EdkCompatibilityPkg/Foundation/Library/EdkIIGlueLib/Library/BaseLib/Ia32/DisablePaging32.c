/**
  AsmDisablePaging32 function.

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

__declspec (naked)
VOID
EFIAPI
InternalX86DisablePaging32 (
  IN      SWITCH_STACK_ENTRY_POINT  EntryPoint,
  IN      VOID                      *Context1,    OPTIONAL
  IN      VOID                      *Context2,    OPTIONAL
  IN      VOID                      *NewStack
  )
{
  _asm {
    push    ebp
    mov     ebp, esp
    mov     ebx, EntryPoint
    mov     ecx, Context1
    mov     edx, Context2
    pushfd
    pop     edi                         // save EFLAGS to edi
    cli
    mov     eax, cr0
    btr     eax, 31
    mov     esp, NewStack
    mov     cr0, eax
    push    edi
    popfd                               // restore EFLAGS from edi
    push    edx
    push    ecx
    call    ebx
    jmp     $                           // EntryPoint() should not return
  }
}


/**
  AsmEnablePaging32 function

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

__declspec (naked)
VOID
EFIAPI
InternalX86EnablePaging32 (
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
    pop     edi
    cli
    mov     eax, cr0
    bts     eax, 31
    mov     esp, NewStack
    mov     cr0, eax
    push    edi
    popfd
    push    edx
    push    ecx
    call    ebx
    jmp     $
  }
}


#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2008, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   DisablePaging32.S
#
# Abstract:
#
#   InternalX86DisablePaging32 function
#
# Notes:
#
#------------------------------------------------------------------------------

ASM_GLOBAL ASM_PFX(InternalX86DisablePaging32)

#------------------------------------------------------------------------------
# VOID
# EFIAPI
# InternalX86DisablePaging32 (
#   IN      SWITCH_STACK_ENTRY_POINT  EntryPoint,
#   IN      VOID                      *Context1,    OPTIONAL
#   IN      VOID                      *Context2,    OPTIONAL
#   IN      VOID                      *NewStack
#   );
#------------------------------------------------------------------------------
ASM_PFX(InternalX86DisablePaging32):
    movl    4(%esp), %ebx
    movl    8(%esp), %ecx
    movl    12(%esp), %edx
    pushfl
    pop     %edi                        # save EFLAGS to edi
    cli
    movl    %cr0, %eax
    btrl    $31, %eax
    movl    16(%esp), %esp
    movl    %eax, %cr0
    push    %edi
    popfl                               # restore EFLAGS from edi
    push    %edx
    push    %ecx
    call    *%ebx
    jmp     .                           # EntryPoint() should not return

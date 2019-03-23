#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   SwitchStack.S
#
# Abstract:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# Routine Description:
#
#   Routine for switching stacks with 1 parameter
#
# Arguments:
#
#   (rdi) EntryPoint    - Entry point with new stack.
#   (rsi) Context1      - Parameter1 for entry point.
#   (rdx)  Context2     - Parameter2 for entry point.
#   (rcx)  NewStack     - Pointer to new stack.
#
# Returns:
#
#   None
#
#------------------------------------------------------------------------------
.globl ASM_PFX(InternalSwitchStack)
ASM_PFX(InternalSwitchStack):
    mov     %rcx, %rax
    mov     %rdx, %rcx
    mov     %r8, %rdx
    lea     -0x20(%r9), %rsp
    call    *%rax

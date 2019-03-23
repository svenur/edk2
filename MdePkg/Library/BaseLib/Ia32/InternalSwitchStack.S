#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2018, Intel Corporation. All rights reserved.<BR>
# Portions copyright (c) 2011, Apple Inc. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   InternalSwitchStack.S
#
# Abstract:
#
#   Implementation of a stack switch on IA-32.
#
#------------------------------------------------------------------------------

ASM_GLOBAL ASM_PFX(InternalSwitchStack)

#------------------------------------------------------------------------------
# VOID
# EFIAPI
# InternalSwitchStack (
#   IN      SWITCH_STACK_ENTRY_POINT  EntryPoint,
#   IN      VOID                      *Context1,   OPTIONAL
#   IN      VOID                      *Context2,   OPTIONAL
#   IN      VOID                      *NewStack
#   );
#------------------------------------------------------------------------------
ASM_PFX(InternalSwitchStack):
  pushl %ebp
  movl  %esp, %ebp

  movl  20(%ebp), %esp      # switch stack
  subl  $8, %esp

  movl  16(%ebp), %eax
  movl  %eax, 4(%esp)
  movl  12(%ebp), %eax
  movl  %eax, (%esp)
  pushl $0                  # keeps gdb from unwinding stack
  jmp   *8(%ebp)            # call and never return


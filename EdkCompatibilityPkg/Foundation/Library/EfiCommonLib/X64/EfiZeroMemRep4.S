#------------------------------------------------------------------------------
#
# Copyright (c) 2008, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   EfiZeroMemRep4.S
#
# Abstract:
#
#   ZeroMem function
#
# Notes:
#
#------------------------------------------------------------------------------
#include <EfiBind.h>

    .code: 

.globl ASM_PFX(EfiCommonLibZeroMem)
#------------------------------------------------------------------------------
#  VOID
#  EfiCommonLibZeroMem (
#    IN VOID   *Buffer,
#    IN UINTN  Size
#    );
#------------------------------------------------------------------------------
ASM_PFX(EfiCommonLibZeroMem):
      push   %rdi
      xor    %rax,%rax
      mov    %rcx,%rdi
      mov    %rdx,%rcx
      shr    $0x2,%rcx
      and    $0x3,%rdx
      rep stos %eax,%es:(%rdi)
      mov    %rdx,%rcx
      rep stos %al,%es:(%rdi)
      pop    %rdi
      retq   
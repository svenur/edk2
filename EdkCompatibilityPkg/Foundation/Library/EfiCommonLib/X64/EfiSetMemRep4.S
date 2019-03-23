#------------------------------------------------------------------------------
#
# Copyright (c) 2008, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   EfiSetMemRep4.S
#
# Abstract:
#
#   SetMem function
#
# Notes:
#
#------------------------------------------------------------------------------
#include <EfiBind.h>

    .code: 

.globl ASM_PFX(EfiCommonLibCopyMem)

#------------------------------------------------------------------------------
# VOID
# EfiCommonLibSetMem (
#   OUT     VOID                      *Buffer,
#   IN      UINTN                     Size,
#   IN      UINT8                     Value
#   );
#------------------------------------------------------------------------------
ASM_PFX(EfiCommonLibSetMem):
      push   %rdi
      cmp    $0x0,%rdx
      je     SetDone
      mov    %rcx,%rdi
      mov    %r8b,%al
      mov    %al,%ah
      shrd   $0x10,%eax,%ecx
      shld   $0x10,%ecx,%eax
      mov    %rdx,%rcx
      shr    $0x2,%rcx
      rep stos %eax,%es:(%rdi)
      mov    %rdx,%rcx
      and    $0x3,%rcx
      rep stos %al,%es:(%rdi)
SetDone:
      pop    %rdi
      retq   

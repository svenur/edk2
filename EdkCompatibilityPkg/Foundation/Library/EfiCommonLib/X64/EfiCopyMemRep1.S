#------------------------------------------------------------------------------
#
# Copyright (c) 2008, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   EfiCopyMemRep1.S
#
# Abstract:
#
#   CopyMem function
#
# Notes:
#
#------------------------------------------------------------------------------
#include <EfiBind.h>

    .code: 

.globl ASM_PFX(EfiCommonLibCopyMem)

#------------------------------------------------------------------------------
# VOID
# EfiCommonLibCopyMem (
#   OUT     VOID                      *Destination,
#   IN      VOID                      *Source,
#   IN      UINTN                     Count
#   );
#------------------------------------------------------------------------------
ASM_PFX(EfiCommonLibCopyMem):
      push   %rsi
      push   %rdi
      cmp    %rcx,%rdx
      je     CopyMemDone
      cmp    $0x0,%r8
      je     CopyMemDone
      mov    %rdx,%rsi
      mov    %rcx,%rdi
      lea    -1(%r8,%rsi,1),%r9
      cmp    %rdi,%rsi
      jae    CopyBytes
      cmp    %rdi,%r9
      jb     CopyBytes
      mov    %r9,%rsi
      lea    -1(%r8,%rdi,1),%rdi
      std    

CopyBytes:
      mov    %r8,%rcx
      rep movsb %ds:(%rsi),%es:(%rdi)
      cld    

CopyMemDone:
      pop    %rdi
      pop    %rsi
      retq   




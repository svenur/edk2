#
# ConvertAsm.py: Automatically generated from CompareMem.asm
#
#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   CompareMem.S
#
# Abstract:
#
#   CompareMem function
#
# Notes:
#
#   The following BaseMemoryLib instances share the same version of this file:
#
#       BaseMemoryLibRepStr
#       BaseMemoryLibMmx
#       BaseMemoryLibSse2
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# INTN
# EFIAPI
# InternalMemCompareMem (
#   IN      CONST VOID                *DestinationBuffer,
#   IN      CONST VOID                *SourceBuffer,
#   IN      UINTN                     Length
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(InternalMemCompareMem)
ASM_PFX(InternalMemCompareMem):
    pushq   %rsi
    pushq   %rdi
    movq    %rcx, %rsi
    movq    %rdx, %rdi
    movq    %r8, %rcx
    repe    cmpsb
    movzbq  -1(%rsi) , %rax
    movzbq  -1(%rdi) , %rdx
    subq    %rdx, %rax
    popq    %rdi
    popq    %rsi
    ret


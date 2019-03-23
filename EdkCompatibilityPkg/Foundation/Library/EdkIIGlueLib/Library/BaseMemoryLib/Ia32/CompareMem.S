#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   CompareMem.Asm
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
.globl ASM_PFX(InternalMemCompareMem)

#------------------------------------------------------------------------------
# INTN
# EFIAPI
# InternalMemCompareMem (
#   IN      CONST VOID                *DestinationBuffer,
#   IN      CONST VOID                *SourceBuffer,
#   IN      UINTN                     Length
#   );
#------------------------------------------------------------------------------
ASM_PFX(InternalMemCompareMem):
    push    %esi
    push    %edi
    movl    12(%esp), %esi
    movl    16(%esp), %edi
    movl    20(%esp), %ecx
    repe    cmpsb
    movzbl  -1(%esi), %eax
    movzbl  -1(%edi), %edx
    subl    %edx, %eax
    pop     %edi
    pop     %esi
    ret

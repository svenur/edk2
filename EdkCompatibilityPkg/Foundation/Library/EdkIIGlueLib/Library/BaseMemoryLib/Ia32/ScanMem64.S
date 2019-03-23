#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ScanMem64.Asm
#
# Abstract:
#
#   ScanMem64 function
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
.globl ASM_PFX(InternalMemScanMem64)

#------------------------------------------------------------------------------
# CONST VOID *
# EFIAPI
# InternalMemScanMem64 (
#   IN      CONST VOID                *Buffer,
#   IN      UINTN                     Length,
#   IN      UINT64                    Value
#   );
#------------------------------------------------------------------------------
ASM_PFX(InternalMemScanMem64):
    push    %edi
    movl    12(%esp), %ecx
    movl    16(%esp), %eax
    movl    20(%esp), %edx
    movl    8(%esp), %edi
L0:
    cmpl    (%edi), %eax
    leal    8(%edi), %edi
    loopne  L0
    jne     L1
    cmpl    -4(%edi), %edx
    jecxz   L1
    jne     L0
L1:
    leal    -8(%edi), %eax
    cmovne  %ecx, %eax
    pop     %edi
    ret

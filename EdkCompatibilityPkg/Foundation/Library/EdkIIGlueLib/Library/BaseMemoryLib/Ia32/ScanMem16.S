#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ScanMem16.Asm
#
# Abstract:
#
#   ScanMem16 function
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
.globl ASM_PFX(InternalMemScanMem16)

#------------------------------------------------------------------------------
# CONST VOID *
# EFIAPI
# InternalMemScanMem16 (
#   IN      CONST VOID                *Buffer,
#   IN      UINTN                     Length,
#   IN      UINT16                    Value
#   );
#------------------------------------------------------------------------------
ASM_PFX(InternalMemScanMem16):
    push    %edi
    movl    12(%esp), %ecx
    movl    8(%esp), %edi
    movl    16(%esp), %eax
    repne   scasw
    leal    -2(%edi), %eax
    cmovnz  %ecx, %eax
    pop     %edi
    ret

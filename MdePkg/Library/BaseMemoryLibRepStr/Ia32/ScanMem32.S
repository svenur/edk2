#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2018, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ScanMem32.Asm
#
# Abstract:
#
#   ScanMem32 function
#
# Notes:
#
#   The following BaseMemoryLib instances contain the same copy of this file:
#
#       BaseMemoryLibRepStr
#       BaseMemoryLibMmx
#       BaseMemoryLibSse2
#       BaseMemoryLibOptDxe
#       BaseMemoryLibOptPei
#
#------------------------------------------------------------------------------

ASM_GLOBAL ASM_PFX(InternalMemScanMem32)

#------------------------------------------------------------------------------
# CONST VOID *
# EFIAPI
# InternalMemScanMem32 (
#   IN      CONST VOID                *Buffer,
#   IN      UINTN                     Length,
#   IN      UINT32                    Value
#   );
#------------------------------------------------------------------------------
ASM_PFX(InternalMemScanMem32):
    push    %edi
    movl    12(%esp), %ecx
    movl    8(%esp), %edi
    movl    16(%esp), %eax
    repne   scasl
    leal    -4(%edi), %eax
    jz      L0
    movl    %ecx, %eax
L0:
    pop     %edi
    ret

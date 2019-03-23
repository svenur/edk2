#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2008, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ScanMem8.Asm
#
# Abstract:
#
#   ScanMem8 function
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

ASM_GLOBAL ASM_PFX(InternalMemScanMem8)

#------------------------------------------------------------------------------
# CONST VOID *
# EFIAPI
# InternalMemScanMem8 (
#   IN      CONST VOID                *Buffer,
#   IN      UINTN                     Length,
#   IN      UINT8                     Value
#   );
#------------------------------------------------------------------------------
ASM_PFX(InternalMemScanMem8):
    push    %edi
    movl    12(%esp), %ecx
    movl    8(%esp), %edi
    movb    16(%esp), %al
    repne   scasb
    leal    -1(%edi), %eax
    cmovnz  %ecx, %eax
    pop     %edi
    ret

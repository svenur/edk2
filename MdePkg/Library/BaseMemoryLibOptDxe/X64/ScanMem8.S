#
# ConvertAsm.py: Automatically generated from ScanMem8.asm
#
#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ScanMem8.S
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


#------------------------------------------------------------------------------
# CONST VOID *
# EFIAPI
# InternalMemScanMem8 (
#   IN      CONST VOID          *Buffer,
#   IN      UINTN               Length,
#   IN      UINT8               Value
#   );
#------------------------------------------------------------------------------
ASM_GLOBAL ASM_PFX(InternalMemScanMem8)
ASM_PFX(InternalMemScanMem8):
    pushq   %rdi
    movq    %rcx, %rdi
    movq    %rdx, %rcx
    movq    %r8, %rax
    repne   scasb
    leaq    -1(%rdi), %rax
    cmovnz  %rcx, %rax                  # set rax to 0 if not found
    popq    %rdi
    ret


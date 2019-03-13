#
# ConvertAsm.py: Automatically generated from ScanMem32.asm
#
#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ScanMem32.S
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


#------------------------------------------------------------------------------
# CONST VOID *
# EFIAPI
# InternalMemScanMem32 (
#   IN      CONST VOID          *Buffer,
#   IN      UINTN                     Length,
#   IN      UINT32                    Value
#   );
#------------------------------------------------------------------------------
ASM_GLOBAL ASM_PFX(InternalMemScanMem32)
ASM_PFX(InternalMemScanMem32):
    pushq   %rdi
    movq    %rcx, %rdi
    movq    %rdx, %rcx
    movq    %r8, %rax
    repne   scasl
    leaq    -4(%rdi), %rax
    cmovnz  %rcx, %rax                    # set rax to 0 if not found
    popq    %rdi
    ret


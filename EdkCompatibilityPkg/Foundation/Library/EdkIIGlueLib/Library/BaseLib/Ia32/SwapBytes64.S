#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   CpuId.Asm
#
# Abstract:
#
#   AsmCpuid function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>


#------------------------------------------------------------------------------
# UINT64
# EFIAPI
# InternalMathSwapBytes64 (
#   IN      UINT64                    Operand
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(InternalMathSwapBytes64)
ASM_PFX(InternalMathSwapBytes64):
    movl    8(%esp), %eax
    movl    4(%esp), %edx
    bswapl  %eax
    bswapl  %edx
    ret

#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2008, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   CpuId.S
#
# Abstract:
#
#   AsmCpuid function
#
# Notes:
#
#------------------------------------------------------------------------------


#------------------------------------------------------------------------------
# UINT64
# EFIAPI
# InternalMathSwapBytes64 (
#   IN      UINT64                    Operand
#   );
#------------------------------------------------------------------------------
ASM_GLOBAL ASM_PFX(InternalMathSwapBytes64)
ASM_PFX(InternalMathSwapBytes64):
    movl    8(%esp), %eax               # eax <- upper 32 bits
    movl    4(%esp), %edx               # edx <- lower 32 bits
    bswapl  %eax
    bswapl  %edx
    ret

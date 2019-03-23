#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2018, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   MultU64x64.S
#
# Abstract:
#
#   Calculate the product of a 64-bit integer and another 64-bit integer
#
#------------------------------------------------------------------------------

ASM_GLOBAL ASM_PFX(InternalMathMultU64x64)

#------------------------------------------------------------------------------
# UINT64
# EFIAPI
# InternalMathMultU64x64 (
#   IN      UINT64                    Multiplicand,
#   IN      UINT64                    Multiplier
#   );
#------------------------------------------------------------------------------
ASM_PFX(InternalMathMultU64x64):
    push    %ebx
    movl    8(%esp), %ebx             # ebx <- M1[0..31]
    movl    16(%esp), %edx            # edx <- M2[0..31]
    movl    %ebx, %ecx
    movl    %edx, %eax
    imull   20(%esp), %ebx            # ebx <- M1[0..31] * M2[32..63]
    imull   12(%esp), %edx            # edx <- M1[32..63] * M2[0..31]
    addl    %edx, %ebx                # carries are abandoned
    mull    %ecx                      # edx:eax <- M1[0..31] * M2[0..31]
    addl    %ebx, %edx                # carries are abandoned
    pop     %ebx
    ret

#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2018, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   RRotU64.S
#
# Abstract:
#
#   64-bit right rotation for Ia32
#
#------------------------------------------------------------------------------

ASM_GLOBAL ASM_PFX(InternalMathRRotU64)

#------------------------------------------------------------------------------
# UINT64
# EFIAPI
# InternalMathRRotU64 (
#   IN      UINT64                    Operand,
#   IN      UINTN                     Count
#   );
#------------------------------------------------------------------------------
ASM_PFX(InternalMathRRotU64):
    push    %ebx
    movb    16(%esp), %cl
    movl    8(%esp), %eax
    movl    12(%esp), %edx
    shrdl   %cl, %eax, %ebx
    shrdl   %cl, %edx, %eax
    roll    %cl, %ebx
    shrdl   %cl, %ebx, %edx
    testb   $32, %cl                    # Count >= 32?
    jz      L0
    movl    %eax, %ecx                  # switch eax & edx if Count >= 32
    movl    %edx, %eax
    movl    %ecx, %edx
L0:
    pop     %ebx
    ret

#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2018, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   LRotU64.S
#
# Abstract:
#
#   64-bit left rotation for Ia32
#
#------------------------------------------------------------------------------

ASM_GLOBAL ASM_PFX(InternalMathLRotU64)

#------------------------------------------------------------------------------
# UINT64
# EFIAPI
# InternalMathLRotU64 (
#   IN      UINT64                    Operand,
#   IN      UINTN                     Count
#   );
#------------------------------------------------------------------------------
ASM_PFX(InternalMathLRotU64):
    push    %ebx
    movb    16(%esp), %cl
    movl    12(%esp), %edx
    movl    8(%esp), %eax
    shldl   %cl, %edx, %ebx
    shldl   %cl, %eax, %edx
    rorl    %cl, %ebx
    shldl   %cl, %ebx, %eax
    testb   $32, %cl                    # Count >= 32?
    jz      L0
    movl    %eax, %ecx
    movl    %edx, %eax
    movl    %ecx, %edx
L0:
    pop     %ebx
    ret

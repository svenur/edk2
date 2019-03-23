#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   SetMem32.asm
#
# Abstract:
#
#   SetMem32 function
#
# Notes:
#
#------------------------------------------------------------------------------

ASM_GLOBAL ASM_PFX(InternalMemSetMem32)

#------------------------------------------------------------------------------
#  VOID *
#  InternalMemSetMem32 (
#    IN VOID   *Buffer,
#    IN UINTN  Count,
#    IN UINT32 Value
#    )
#------------------------------------------------------------------------------
ASM_PFX(InternalMemSetMem32):
    movl    4(%esp), %eax
    movl    8(%esp), %ecx
    movd    12(%esp), %mm0
    shrl    %ecx
    movl    %eax, %edx
    jz      L1
    movq    %mm0, %mm1
    psllq   $32, %mm1
    por     %mm1, %mm0
L0:
    movq    %mm0, (%edx)
    lea     8(%edx), %edx
    loop    L0
L1:
    jnc     L2
    movd    %mm0, (%edx)
L2:
    ret

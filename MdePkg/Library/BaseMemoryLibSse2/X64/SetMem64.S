#
# ConvertAsm.py: Automatically generated from SetMem64.asm
#
#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   SetMem64.S
#
# Abstract:
#
#   SetMem64 function
#
# Notes:
#
#------------------------------------------------------------------------------


#------------------------------------------------------------------------------
#  VOID *
#  InternalMemSetMem64 (
#    IN VOID   *Buffer,
#    IN UINTN  Count,
#    IN UINT64 Value
#    )
#------------------------------------------------------------------------------
ASM_GLOBAL ASM_PFX(InternalMemSetMem64)
ASM_PFX(InternalMemSetMem64):
    movq    %rcx, %rax                    # rax <- Buffer
    xchgq   %rdx, %rcx                    # rcx <- Count & rdx <- Buffer
    testb   $8, %dl
    movd    %r8, %xmm0
    jz      L0
    movq    %r8, (%rdx)
    addq    $8, %rdx
    decq    %rcx
L0:
    shrq    $1, %rcx
    jz      L_SetQwords
    movlhps %xmm0, %xmm0
L1:
    movntdq %xmm0, (%rdx)
    leaq    16(%rdx), %rdx
    loop    L1
    mfence
L_SetQwords:
    jnc     L2
    movq    %r8, (%rdx)
L2:
    ret


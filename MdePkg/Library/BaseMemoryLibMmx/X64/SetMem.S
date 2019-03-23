#
# ConvertAsm.py: Automatically generated from SetMem.asm
#
#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2018, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   SetMem.S
#
# Abstract:
#
#   SetMem function
#
# Notes:
#
#------------------------------------------------------------------------------


#------------------------------------------------------------------------------
#  VOID *
#  EFIAPI
#  InternalMemSetMem (
#    IN VOID   *Buffer,
#    IN UINTN  Count,
#    IN UINT8  Value
#    )
#------------------------------------------------------------------------------
ASM_GLOBAL ASM_PFX(InternalMemSetMem)
ASM_PFX(InternalMemSetMem):
    push    %rdi
    movq    %r8, %rax
    movb    %al, %ah
    movd    %rax, %mm0
    movq    %rcx, %r8
    movq    %r8, %rdi                     # rdi <- Buffer
    movq    %rdx, %rcx
    andq    $7, %rdx
    shrq    $3, %rcx
    jz      L_SetBytes
    .byte   0x0f, 0x70, 0x0C0, 0x00
L0:
    movntq  %mm0, (%rdi)
    addq    $8, %rdi
    loop    L0
    mfence
L_SetBytes:
    movl    %edx, %ecx
    rep       stosb
    movq    %r8, %rax
    pop     %rdi
    ret


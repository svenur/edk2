#
# ConvertAsm.py: Automatically generated from SetMem16.asm
#
#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2018, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   SetMem16.S
#
# Abstract:
#
#   SetMem16 function
#
# Notes:
#
#------------------------------------------------------------------------------


#------------------------------------------------------------------------------
#  VOID *
#  EFIAPI
#  InternalMemSetMem16 (
#    IN VOID   *Buffer,
#    IN UINTN  Count,
#    IN UINT16 Value
#    )
#------------------------------------------------------------------------------
ASM_GLOBAL ASM_PFX(InternalMemSetMem16)
ASM_PFX(InternalMemSetMem16):
    pushq    %rdi
    movq     %r8, %rax
    movd     %rax, %mm0
    movq     %rcx, %r8
    movq     %r8, %rdi
    movq     %rdx, %rcx
    andl     $3, %edx
    shrq     $2, %rcx
    jz       L_SetWords
    .byte    0x0f, 0x70, 0x0C0, 0x00
L0:
    movntq   %mm0, (%rdi)
    addq     $8, %rdi
    loop     L0
    mfence
L_SetWords:
    movl    %edx, %ecx
    rep     stosw
    movq    %r8, %rax
    popq    %rdi
    ret


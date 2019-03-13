#
# ConvertAsm.py: Automatically generated from ZeroMem.asm
#
#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ZeroMem.S
#
# Abstract:
#
#   ZeroMem function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
#  VOID *
#  InternalMemZeroMem (
#    IN VOID   *Buffer,
#    IN UINTN  Count
#    );
#------------------------------------------------------------------------------
.globl ASM_PFX(InternalMemZeroMem)
ASM_PFX(InternalMemZeroMem):
    pushq   %rdi
    pushq   %rcx
    xorq    %rax, %rax
    movq    %rcx, %rdi
    movq    %rdx, %rcx
    shrq    $3, %rcx
    andq    $7, %rdx
    rep     stosq
    movl    %edx, %ecx
    rep     stosb
    popq    %rax
    popq    %rdi
    ret


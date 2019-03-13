#
# ConvertAsm.py: Automatically generated from SetMem.asm
#
#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
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

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
#  VOID *
#  EFIAPI
#  InternalMemSetMem (
#    IN VOID   *Buffer,
#    IN UINTN  Count,
#    IN UINT8  Value
#    )
#------------------------------------------------------------------------------
.globl ASM_PFX(InternalMemSetMem)
ASM_PFX(InternalMemSetMem):
    pushq   %rdi
    movq    %r8, %rax      # rax = Value
    movq    %rcx, %rdi     # rdi = Buffer
    xchgq   %rdx, %rcx     # rcx = Count, rdx = Buffer
    rep     stosb
    movq    %rdx, %rax     # rax = Buffer
    popq    %rdi
    ret


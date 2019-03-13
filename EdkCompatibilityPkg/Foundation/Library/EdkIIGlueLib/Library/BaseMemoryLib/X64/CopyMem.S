#
# ConvertAsm.py: Automatically generated from CopyMem.asm
#
#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   CopyMem.S
#
# Abstract:
#
#   CopyMem function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
#  VOID *
#  EFIAPI
#  InternalMemCopyMem (
#    IN VOID   *Destination,
#    IN VOID   *Source,
#    IN UINTN  Count
#    )
#------------------------------------------------------------------------------
.globl ASM_PFX(InternalMemCopyMem)
ASM_PFX(InternalMemCopyMem):
    pushq   %rsi
    pushq   %rdi
    movq    %rdx, %rsi                  # rsi <- Source
    movq    %rcx, %rdi                  # rdi <- Destination
    leaq    -1(%rsi, %r8,), %r9         # r9 <- End of Source
    cmpq    %rdi, %rsi
    movq    %rdi, %rax                  # rax <- Destination as return value
    jae     L0
    cmpq    %rdi, %r9
    jae     L_CopyBackward               # Copy backward if overlapped
L0:
    movq    %r8, %rcx
    andq    $7, %r8
    shrq    $3, %rcx
    rep     movsq                       # Copy as many Qwords as possible
    jmp     L_CopyBytes
L_CopyBackward:
    movq    %r9, %rsi                   # rsi <- End of Source
    leaq    -1(%rdi, %r8),  %rdi        # esi <- End of Destination
    std                                 # set direction flag
L_CopyBytes:
    movq    %r8, %rcx
    rep     movsb                       # Copy bytes backward
    cld
    popq    %rdi
    popq    %rsi
    ret


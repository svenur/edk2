#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   SetMem64.Asm
#
# Abstract:
#
#   SetMem64 function
#
# Notes:
#
#------------------------------------------------------------------------------
#include <EdkIIGlueBase.h>
.globl ASM_PFX(InternalMemSetMem64)

#------------------------------------------------------------------------------
#  VOID *
#  InternalMemSetMem64 (
#    IN VOID   *Buffer,
#    IN UINTN  Count,
#    IN UINT64 Value
#    )
#------------------------------------------------------------------------------
ASM_PFX(InternalMemSetMem64):
    push    %edi
    movl    12(%esp), %ecx
    movl    16(%esp), %eax
    movl    20(%esp), %edx
    movl    8(%esp), %edi
L0:
    mov     %eax, -8(%edi, %ecx, 8)
    mov     %edx, -4(%edi, %ecx, 8)
    loop    L0
    movl    %edi, %eax
    pop     %edi
    ret

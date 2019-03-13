#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ZeroMem.asm
#
# Abstract:
#
#   ZeroMem function
#
# Notes:
#
#------------------------------------------------------------------------------

ASM_GLOBAL ASM_PFX(InternalMemZeroMem)

#------------------------------------------------------------------------------
#  VOID *
#  EFIAPI
#  InternalMemZeroMem (
#    IN VOID   *Buffer,
#    IN UINTN  Count
#    );
#------------------------------------------------------------------------------
ASM_PFX(InternalMemZeroMem):
    push    %edi
    movl    8(%esp), %edi
    movl    12(%esp), %ecx
    movl    %ecx, %edx
    shrl    $3, %ecx
    jz      L_ZeroBytes
    pxor    %mm0, %mm0
L0:
    movq    %mm0, (%edi)
    addl    $8, %edi
    loop    L0
L_ZeroBytes:
    andl    $7, %edx
    xorl    %eax, %eax
    movl    %edx, %ecx
    rep
    stosb
    movl    8(%esp), %eax
    pop     %edi
    ret

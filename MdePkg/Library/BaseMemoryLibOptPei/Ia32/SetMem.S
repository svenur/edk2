#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2008, Intel Corporation. All rights reserved.<BR>
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

ASM_GLOBAL ASM_PFX(InternalMemSetMem)

#------------------------------------------------------------------------------
#  VOID *
#  InternalMemSetMem (
#    IN VOID   *Buffer,
#    IN UINTN  Count,
#    IN UINT8  Value
#    )
#------------------------------------------------------------------------------
ASM_PFX(InternalMemSetMem):
    push    %edi
    movl    12(%esp),%ecx
    movb    16(%esp),%al
    movb    %al, %ah
    shrd    $16, %eax, %edx
    shld    $16, %edx, %eax
    movl    %ecx, %edx
    movl    8(%esp),%edi
    shr    $2, %ecx
    rep stosl
    movl    %edx, %ecx
    andl    $3, %ecx
    rep stosb
    movl    8(%esp),%eax
    pop     %edi
    ret

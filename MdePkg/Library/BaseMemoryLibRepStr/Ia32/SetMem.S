#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2008, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   SetMem.Asm
#
# Abstract:
#
#   SetMem function
#
# Notes:
#
#------------------------------------------------------------------------------


    .code:

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
    movl    16(%esp),%eax
    movl    8(%esp),%edi
    movl    12(%esp),%ecx
    rep
    stosb
    movl    8(%esp),%eax
    pop     %edi
    ret

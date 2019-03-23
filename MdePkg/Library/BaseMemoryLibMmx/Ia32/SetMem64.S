#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   SetMem64.asm
#
# Abstract:
#
#   SetMem64 function
#
# Notes:
#
#------------------------------------------------------------------------------

ASM_GLOBAL ASM_PFX(InternalMemSetMem64)

#------------------------------------------------------------------------------
#  VOID *
#  InternalMemSetMem64 (
#    IN VOID   *Buffer,
#    IN UINTN  Count,
#    IN UINT64 Value
#    )
#------------------------------------------------------------------------------
ASM_PFX(InternalMemSetMem64):
    movl    4(%esp), %eax
    movl    8(%esp), %ecx
    movq    12(%esp), %mm0
    movl    %eax, %edx
L0:
    movq    %mm0, (%edx)
    lea     8(%edx), %edx
    loop    L0
    ret

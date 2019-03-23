#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2008, Intel Corporation. All rights reserved.<BR>
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

ASM_GLOBAL ASM_PFX(InternalMemSetMem16)

#------------------------------------------------------------------------------
#  VOID *
#  InternalMemSetMem16 (
#    IN VOID   *Buffer,
#    IN UINTN  Count,
#    IN UINT16 Value
#    )
#------------------------------------------------------------------------------
ASM_PFX(InternalMemSetMem16):
    push    %edi
    movl    16(%esp), %eax
    movl    8(%esp), %edi
    movl    12(%esp), %ecx
    rep
    stosw
    movl    8(%esp), %eax
    pop     %edi
    ret

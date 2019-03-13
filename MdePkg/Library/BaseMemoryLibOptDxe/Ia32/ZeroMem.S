#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2008, Intel Corporation. All rights reserved.<BR>
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

ASM_GLOBAL ASM_PFX(InternalMemZeroMem)

#------------------------------------------------------------------------------
#  VOID *
#  InternalMemZeroMem (
#    IN VOID   *Buffer,
#    IN UINTN  Count
#    );
#------------------------------------------------------------------------------
ASM_PFX(InternalMemZeroMem):
    push    %edi
    xorl    %eax,%eax
    movl    8(%esp),%edi
    movl    12(%esp),%ecx
    movl    %ecx,%edx
    shrl    $2,%ecx
    andl    $3,%edx
    pushl   %edi
    rep
    stosl
    movl    %edx,%ecx
    rep
    stosb
    popl    %eax
    pop     %edi
    ret

#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   WriteMsr64.Asm
#
# Abstract:
#
#   AsmWriteMsr64 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

#------------------------------------------------------------------------------
# UINT64
# EFIAPI
# AsmWriteMsr64 (
#   IN UINT32  Index,
#   IN UINT64  Value
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmWriteMsr64)
ASM_PFX(AsmWriteMsr64):
    movl    12(%esp), %edx
    movl    8(%esp), %eax
    movl    4(%esp), %ecx
    wrmsr
    ret

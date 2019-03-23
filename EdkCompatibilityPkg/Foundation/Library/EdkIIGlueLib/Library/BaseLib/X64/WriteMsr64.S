#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   WriteMsr64.S
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
# TODO:
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmWriteMsr64)
ASM_PFX(AsmWriteMsr64):
    mov	%rdx, %rax
    shr $0x20, %rdx
    wrmsr
    ret

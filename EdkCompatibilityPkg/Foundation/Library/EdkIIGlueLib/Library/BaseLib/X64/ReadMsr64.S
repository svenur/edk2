#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadMsr64.S
#
# Abstract:
#
#   AsmReadMsr64 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINT64
# EFIAPI
# AsmReadMsr64 (
#   IN UINT32  Index
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmReadMsr64)
ASM_PFX(AsmReadMsr64):
    rdmsr                               # edx & eax are zero extended
    shl     $0x20, %rdx
    or      %rdx, %rax
    ret

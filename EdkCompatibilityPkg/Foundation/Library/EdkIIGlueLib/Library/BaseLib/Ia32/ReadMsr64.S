#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadMsr64.Asm
#
# Abstract:
#
#   AsmReadMsr64 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmReadMsr64)

#------------------------------------------------------------------------------
# UINT64
# EFIAPI
# AsmReadMsr64 (
#   IN UINT32  Index
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmReadMsr64):
    movl    4(%esp), %ecx
    rdmsr
    ret

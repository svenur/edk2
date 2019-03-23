#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadCr4.S
#
# Abstract:
#
#   AsmReadCr4 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmReadCr4 (
#   VOID
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmReadCr4)
ASM_PFX(AsmReadCr4):
    mov     %cr4, %rax
    ret

#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadCr4.Asm
#
# Abstract:
#
#   AsmReadCr4 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmReadCr4)

#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmReadCr4 (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmReadCr4):
    movl    %cr4, %eax
    ret

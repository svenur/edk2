#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadDr4.Asm
#
# Abstract:
#
#   AsmReadDr4 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmReadDr4)

#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmReadDr4 (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmReadDr4):
    movl    %dr4, %eax
    ret

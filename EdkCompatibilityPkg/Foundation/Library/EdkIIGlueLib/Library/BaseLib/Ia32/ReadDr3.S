#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadDr3.Asm
#
# Abstract:
#
#   AsmReadDr3 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmReadDr3)

#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmReadDr3 (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmReadDr3):
    movl    %dr3, %eax
    ret

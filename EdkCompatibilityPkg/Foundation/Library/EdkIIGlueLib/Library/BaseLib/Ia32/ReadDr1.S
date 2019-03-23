#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadDr1.Asm
#
# Abstract:
#
#   AsmReadDr1 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmReadDr1)

#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmReadDr1 (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmReadDr1):
    movl    %dr1, %eax
    ret

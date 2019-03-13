#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadDr2.Asm
#
# Abstract:
#
#   AsmReadDr2 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmReadDr2)

#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmReadDr2 (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmReadDr2):
    movl    %dr2, %eax
    ret

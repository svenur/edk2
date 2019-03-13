#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadCs.Asm
#
# Abstract:
#
#   AsmReadCs function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmReadCs)

#------------------------------------------------------------------------------
# UINT16
# EFIAPI
# AsmReadCs (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmReadCs):
    movl    %cs, %eax
    ret

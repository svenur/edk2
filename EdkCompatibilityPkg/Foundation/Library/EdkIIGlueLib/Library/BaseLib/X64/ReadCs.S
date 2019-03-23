#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadCs.S
#
# Abstract:
#
#   AsmReadCs function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINT16
# EFIAPI
# AsmReadCs (
#   VOID
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmReadCs)
ASM_PFX(AsmReadCs):
    mov     %cs, %eax
    ret

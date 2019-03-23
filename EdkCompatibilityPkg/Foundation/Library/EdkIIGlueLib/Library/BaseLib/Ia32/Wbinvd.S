#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   Wbinvd.Asm
#
# Abstract:
#
#   AsmWbinvd function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

#------------------------------------------------------------------------------
# VOID
# EFIAPI
# AsmWbinvd (
#   VOID
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmWbinvd)
ASM_PFX(AsmWbinvd):
    wbinvd
    ret

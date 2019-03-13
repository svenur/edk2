#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   Wbinvd.S
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

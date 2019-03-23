#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadTr.S
#
# Abstract:
#
#   AsmReadTr function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINT16
# EFIAPI
# AsmReadTr (
#   VOID
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmReadTr)
ASM_PFX(AsmReadTr): 
    str     %eax
    ret

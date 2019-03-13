#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadDs.S
#
# Abstract:
#
#   AsmReadDs function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINT16
# EFIAPI
# AsmReadDs (
#   VOID
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmReadDs)
ASM_PFX(AsmReadDs):
    movl	%ds, %eax
    ret

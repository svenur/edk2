#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadDs.Asm
#
# Abstract:
#
#   AsmReadDs function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmReadDs)

#------------------------------------------------------------------------------
# UINT16
# EFIAPI
# AsmReadDs (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmReadDs):
    movl    %ds, %eax
    ret

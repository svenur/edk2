#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadEs.Asm
#
# Abstract:
#
#   AsmReadEs function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmReadEs)

#------------------------------------------------------------------------------
# UINT16
# EFIAPI
# AsmReadEs (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmReadEs):
    movl    %es, %eax
    ret

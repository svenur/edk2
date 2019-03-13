#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadDr0.Asm
#
# Abstract:
#
#   AsmReadDr0 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmReadDr0)

#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmReadDr0 (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmReadDr0):
    movl    %dr0, %eax
    ret

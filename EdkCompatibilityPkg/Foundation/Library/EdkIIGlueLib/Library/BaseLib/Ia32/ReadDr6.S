#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadDr6.Asm
#
# Abstract:
#
#   AsmReadDr6 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmReadDr6)

#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmReadDr6 (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmReadDr6):
    movl    %dr6, %eax
    ret

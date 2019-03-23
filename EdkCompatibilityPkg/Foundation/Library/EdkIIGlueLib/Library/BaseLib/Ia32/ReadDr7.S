#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadDr7.Asm
#
# Abstract:
#
#   AsmReadDr7 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmReadDr7)

#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmReadDr7 (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmReadDr7):
    movl    %dr7, %eax
    ret

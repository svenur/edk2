#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadDr5.Asm
#
# Abstract:
#
#   AsmReadDr5 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmReadDr5)

#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmReadDr5 (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmReadDr5):
    movl    %dr5, %eax
    ret

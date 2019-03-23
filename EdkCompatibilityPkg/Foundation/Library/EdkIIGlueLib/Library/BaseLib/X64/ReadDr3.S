#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadDr3.S
#
# Abstract:
#
#   AsmReadDr3 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmReadDr3 (
#   VOID
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmReadDr3)
ASM_PFX(AsmReadDr3):
    mov     %dr3, %rax
    ret

#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadDr6.S
#
# Abstract:
#
#   AsmReadDr6 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmReadDr6 (
#   VOID
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmReadDr6)
ASM_PFX(AsmReadDr6):
    mov	%dr6, %rax
    ret

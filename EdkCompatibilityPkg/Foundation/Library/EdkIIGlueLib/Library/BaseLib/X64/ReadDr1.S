#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadDr1.S
#
# Abstract:
#
#   AsmReadDr1 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmReadDr1 (
#   VOID
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmReadDr1)
ASM_PFX(AsmReadDr1):
    mov     %dr1, %rax
    ret

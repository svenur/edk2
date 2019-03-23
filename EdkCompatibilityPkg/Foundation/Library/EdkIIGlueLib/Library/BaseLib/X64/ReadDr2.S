#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadDr2.S
#
# Abstract:
#
#   AsmReadDr2 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmReadDr2 (
#   VOID
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmReadDr2)
ASM_PFX(AsmReadDr2):
    mov     %dr2, %rax
    ret

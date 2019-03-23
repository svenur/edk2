#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadDr4.S
#
# Abstract:
#
#   AsmReadDr4 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmReadDr4 (
#   VOID
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmReadDr4)
ASM_PFX(AsmReadDr4):
    #DB      0fh, 21h, 0e0h
    mov     %dr4, %rax
    ret

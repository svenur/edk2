#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadCr3.S
#
# Abstract:
#
#   AsmReadCr3 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmReadCr3 (
#   VOID
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmReadCr3)
ASM_PFX(AsmReadCr3):
    mov     %cr3, %rax
    ret

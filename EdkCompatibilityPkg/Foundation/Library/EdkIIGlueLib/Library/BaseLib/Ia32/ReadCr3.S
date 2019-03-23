#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadCr3.Asm
#
# Abstract:
#
#   AsmReadCr3 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmReadCr3)

#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmReadCr3 (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmReadCr3):
    movl    %cr3, %eax
    ret

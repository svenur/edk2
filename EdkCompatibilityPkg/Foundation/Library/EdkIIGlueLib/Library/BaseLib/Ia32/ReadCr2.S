#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadCr2.Asm
#
# Abstract:
#
#   AsmReadCr2 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmReadCr2)

#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmReadCr2 (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmReadCr2):
    movl    %cr2, %eax
    ret

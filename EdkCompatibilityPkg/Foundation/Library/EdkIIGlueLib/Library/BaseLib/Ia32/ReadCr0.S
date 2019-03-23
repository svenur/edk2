#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadCr0.Asm
#
# Abstract:
#
#   AsmReadCr0 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmReadCr0)

#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmReadCr0 (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmReadCr0):
    movl    %cr0, %eax
    ret

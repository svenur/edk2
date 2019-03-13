#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadFs.Asm
#
# Abstract:
#
#   AsmReadFs function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmReadFs)

#------------------------------------------------------------------------------
# UINT16
# EFIAPI
# AsmReadFs (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmReadFs):
    movl    %fs, %eax
    ret

#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadEflags.Asm
#
# Abstract:
#
#   AsmReadEflags function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmReadEflags)

#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmReadEflags (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmReadEflags):
    pushfl
    pop     %eax
    ret

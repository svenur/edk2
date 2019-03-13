#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadSs.Asm
#
# Abstract:
#
#   AsmReadSs function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmReadSs)

#------------------------------------------------------------------------------
# UINT16
# EFIAPI
# AsmReadSs (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmReadSs):
    movl    %ss, %eax
    ret

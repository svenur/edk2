#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadGs.Asm
#
# Abstract:
#
#   AsmReadGs function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmReadGs)

#------------------------------------------------------------------------------
# UINT16
# EFIAPI
# AsmReadGs (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmReadGs):
    movl    %gs, %eax
    ret

#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   WriteMm2.Asm
#
# Abstract:
#
#   AsmWriteMm2 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

#------------------------------------------------------------------------------
# VOID
# EFIAPI
# AsmWriteMm2 (
#   IN UINT64   Value
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmWriteMm2)
ASM_PFX(AsmWriteMm2):
    movq    4(%esp), %mm2
    ret

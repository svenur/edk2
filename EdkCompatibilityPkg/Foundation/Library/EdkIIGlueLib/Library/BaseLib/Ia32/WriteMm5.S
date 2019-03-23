#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   WriteMm5.Asm
#
# Abstract:
#
#   AsmWriteMm5 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

#------------------------------------------------------------------------------
# VOID
# EFIAPI
# AsmWriteMm5 (
#   IN UINT64   Value
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmWriteMm5)
ASM_PFX(AsmWriteMm5):
    movq    4(%esp), %mm5
    ret

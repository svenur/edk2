#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   WriteMm4.S
#
# Abstract:
#
#   AsmWriteMm4 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# VOID
# EFIAPI
# AsmWriteMm4 (
#   IN UINT64   Value
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmWriteMm4)
ASM_PFX(AsmWriteMm4):
    movd	%rcx, %mm4
    ret

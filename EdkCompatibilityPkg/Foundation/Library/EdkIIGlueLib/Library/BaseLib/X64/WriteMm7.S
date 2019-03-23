#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   WriteMm7.S
#
# Abstract:
#
#   AsmWriteMm7 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# VOID
# EFIAPI
# AsmWriteMm7 (
#   IN UINT64   Value
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmWriteMm7)
ASM_PFX(AsmWriteMm7):
    movd	%rcx, %mm7
    ret

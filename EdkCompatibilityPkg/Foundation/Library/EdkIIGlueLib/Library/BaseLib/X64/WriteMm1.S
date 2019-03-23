#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   WriteMm1.S
#
# Abstract:
#
#   AsmWriteMm1 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# VOID
# EFIAPI
# AsmWriteMm1 (
#   IN UINT64   Value
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmWriteMm1);
ASM_PFX(AsmWriteMm1):
    movd	%rcx, %mm1
    ret

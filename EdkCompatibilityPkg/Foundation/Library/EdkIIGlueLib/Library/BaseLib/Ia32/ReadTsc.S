#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadTsc.Asm
#
# Abstract:
#
#   AsmReadTsc function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmReadTsc)

#------------------------------------------------------------------------------
# UINT64
# EFIAPI
# AsmReadTsc (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmReadTsc):
    rdtsc
    ret

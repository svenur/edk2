#------------------------------------------------------------------------------ ;
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   CpuSleep.Asm
#
# Abstract:
#
#   CpuSleep function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(CpuSleep)

#------------------------------------------------------------------------------
# VOID
# EFIAPI
# CpuSleep (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(CpuSleep):
    hlt
    ret

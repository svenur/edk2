#------------------------------------------------------------------------------ ;
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   CpuSleep.S
#
# Abstract:
#
#   CpuSleep function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# VOID
# EFIAPI
# CpuSleep (
#   VOID
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(CpuSleep)
ASM_PFX(CpuSleep):
    hlt
    ret

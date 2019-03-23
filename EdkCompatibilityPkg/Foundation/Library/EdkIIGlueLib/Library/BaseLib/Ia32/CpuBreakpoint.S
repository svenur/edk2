#------------------------------------------------------------------------------ ;
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   CpuBreakpoint.s
#
# Abstract:
#
#   CpuBreakpoint function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(CpuBreakpoint)

#------------------------------------------------------------------------------
# VOID
# EFIAPI
# CpuBreakpoint (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(CpuBreakpoint):
    int  $3
    ret

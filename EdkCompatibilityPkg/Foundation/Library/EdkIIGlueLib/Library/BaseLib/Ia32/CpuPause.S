#------------------------------------------------------------------------------ ;
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   CpuPause.Asm
#
# Abstract:
#
#   CpuPause function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(CpuPause)

#------------------------------------------------------------------------------
# VOID
# EFIAPI
# CpuPause (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(CpuPause):
    pause
    ret

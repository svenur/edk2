#------------------------------------------------------------------------------ ;
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   CpuPause.S
#
# Abstract:
#
#   CpuPause function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# VOID
# EFIAPI
# CpuPause (
#   VOID
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(CpuPause)
ASM_PFX(CpuPause):
    pause
    ret

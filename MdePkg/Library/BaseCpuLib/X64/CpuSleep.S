#------------------------------------------------------------------------------ ;
# Copyright (c) 2006 - 2008, Intel Corporation. All rights reserved.<BR>
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


#------------------------------------------------------------------------------
# VOID
# EFIAPI
# CpuSleep (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_GLOBAL ASM_PFX(CpuSleep)
ASM_PFX(CpuSleep):
    hlt
    ret

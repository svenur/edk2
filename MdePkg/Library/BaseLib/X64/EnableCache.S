#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2018, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   EnableCache.S
#
# Abstract:
#
#   Flush all caches with a WBINVD instruction, clear the CD bit of CR0 to 0, and clear
#   the NW bit of CR0 to 0
#
# Notes:
#
#------------------------------------------------------------------------------

#------------------------------------------------------------------------------
# VOID
# EFIAPI
# AsmEnableCache (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_GLOBAL ASM_PFX(AsmEnableCache)
ASM_PFX(AsmEnableCache):
    wbinvd
    movq    %cr0, %rax
    btrq    $30, %rax
    btrq    $29, %rax
    movq    %rax, %cr0
    ret

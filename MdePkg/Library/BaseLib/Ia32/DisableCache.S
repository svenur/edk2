#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2008, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   DisableCache.S
#
# Abstract:
#
#   Set the CD bit of CR0 to 1, clear the NW bit of CR0 to 0, and flush all caches with a
#   WBINVD instruction.
#
# Notes:
#
#------------------------------------------------------------------------------

#------------------------------------------------------------------------------
# VOID
# EFIAPI
# AsmDisableCache (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_GLOBAL ASM_PFX(AsmDisableCache)
ASM_PFX(AsmDisableCache):
    movl    %cr0, %eax
    btsl    $30, %eax
    btrl    $29, %eax
    movl    %eax, %cr0
    wbinvd
    ret

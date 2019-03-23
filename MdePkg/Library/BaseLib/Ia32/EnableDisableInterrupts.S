#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2008, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   EnableDisableInterrupts.S
#
# Abstract:
#
#   EnableDisableInterrupts function
#
# Notes:
#
#------------------------------------------------------------------------------

ASM_GLOBAL ASM_PFX(EnableDisableInterrupts)

#------------------------------------------------------------------------------
# VOID
# EFIAPI
# EnableDisableInterrupts (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(EnableDisableInterrupts):
    sti
    cli
    ret

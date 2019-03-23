#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
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

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# VOID
# EFIAPI
# EnableDisableInterrupts (
#   VOID
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(EnableDisableInterrupts)
ASM_PFX(EnableDisableInterrupts):
    sti
    cli
    ret

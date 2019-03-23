#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   EnableDisableInterrupts.Asm
#
# Abstract:
#
#   EnableDisableInterrupts function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(EnableDisableInterrupts)

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

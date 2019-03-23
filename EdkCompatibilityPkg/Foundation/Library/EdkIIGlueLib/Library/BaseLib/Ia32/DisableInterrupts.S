#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   DisableInterrupts.Asm
#
# Abstract:
#
#   DisableInterrupts function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(DisableInterrupts)

#------------------------------------------------------------------------------
# VOID
# EFIAPI
# DisableInterrupts (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(DisableInterrupts):
    cli
    ret

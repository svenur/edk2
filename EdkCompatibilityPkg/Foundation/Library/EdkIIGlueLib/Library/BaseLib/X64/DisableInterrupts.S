#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   DisableInterrupts.S
#
# Abstract:
#
#   DisableInterrupts function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# VOID
# EFIAPI
# DisableInterrupts (
#   VOID
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(DisableInterrupts)
ASM_PFX(DisableInterrupts):
    cli
    ret

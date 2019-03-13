#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   EnableInterrupts.Asm
#
# Abstract:
#
#   EnableInterrupts function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(EnableInterrupts)

#------------------------------------------------------------------------------
# VOID
# EFIAPI
# EnableInterrupts (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(EnableInterrupts):
    sti
    ret

#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   EnableInterrupts.S
#
# Abstract:
#
#   EnableInterrupts function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# VOID
# EFIAPI
# EnableInterrupts (
#   VOID
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(EnableInterrupts)
ASM_PFX(EnableInterrupts):
    sti
    ret

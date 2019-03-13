#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   FxRestore.S
#
# Abstract:
#
#   AsmFxRestore function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# VOID
# EFIAPI
# InternalX86FxRestore (
#   IN CONST IA32_FX_BUFFER *Buffer
#   )#
#------------------------------------------------------------------------------
.globl ASM_PFX(InternalX86FxRestore)
ASM_PFX(InternalX86FxRestore):
    fxrstor (%rcx)
    ret

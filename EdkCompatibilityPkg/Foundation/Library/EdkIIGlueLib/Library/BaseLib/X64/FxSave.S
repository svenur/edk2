#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   FxSave.S
#
# Abstract:
#
#   AsmFxSave function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# VOID
# EFIAPI
# InternalX86FxSave (
#   OUT IA32_FX_BUFFER *Buffer
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(InternalX86FxSave)
ASM_PFX(InternalX86FxSave):
    fxsave  (%rcx)
    ret

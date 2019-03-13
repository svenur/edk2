#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   FxRestore.Asm
#
# Abstract:
#
#   InternalX86FxRestore function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(InternalX86FxRestore)

#------------------------------------------------------------------------------
# VOID
# EFIAPI
# InternalX86FxRestore (
#   IN CONST IA32_FX_BUFFER *Buffer
#   );
#------------------------------------------------------------------------------
ASM_PFX(InternalX86FxRestore):
    movl    4(%esp), %eax
    fxrstor (%eax)
    ret

#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   WriteGdtr.Asm
#
# Abstract:
#
#   InternalX86WriteGdtr function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

#------------------------------------------------------------------------------
# VOID
# EFIAPI
# InternalX86WriteGdtr (
#   OUT IA32_DESCRIPTOR  *Gdtr
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(InternalX86WriteGdtr)
ASM_PFX(InternalX86WriteGdtr):
    movl    4(%esp), %eax
    lgdt    (%eax)
    ret

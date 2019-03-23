#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadGdtr.Asm
#
# Abstract:
#
#   InternalX86ReadGdtr function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(InternalX86ReadGdtr)

#------------------------------------------------------------------------------
# VOID
# EFIAPI
# InternalX86ReadGdtr (
#   OUT IA32_DESCRIPTOR  *Gdtr
#   );
#------------------------------------------------------------------------------
ASM_PFX(InternalX86ReadGdtr):
    movl    4(%esp), %eax
    sgdt    (%eax)
    ret

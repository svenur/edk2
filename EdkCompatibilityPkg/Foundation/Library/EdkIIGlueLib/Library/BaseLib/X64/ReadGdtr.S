#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadGdtr.S
#
# Abstract:
#
#   AsmReadGdtr function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# VOID
# EFIAPI
# InternalX86ReadGdtr (
#   OUT IA32_DESCRIPTOR  *Gdtr
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(InternalX86ReadGdtr)
ASM_PFX(InternalX86ReadGdtr):
    sgdt  (%rcx)
    ret

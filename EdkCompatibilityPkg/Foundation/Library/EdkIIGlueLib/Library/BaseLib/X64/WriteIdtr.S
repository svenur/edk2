#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   WriteIdtr.S
#
# Abstract:
#
#   AsmWriteIdtr function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# VOID
# EFIAPI
# InternalX86WriteIdtr (
#   IN      CONST IA32_DESCRIPTOR     *Idtr
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(InternalX86WriteIdtr)
ASM_PFX(InternalX86WriteIdtr):
    lidt    (%rcx)
    ret

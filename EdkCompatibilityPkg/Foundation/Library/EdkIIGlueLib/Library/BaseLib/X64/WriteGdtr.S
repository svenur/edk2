#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   WriteGdtr.S
#
# Abstract:
#
#   AsmWriteGdtr function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# VOID
# EFIAPI
# InternalX86WriteGdtr (
#   IN      CONST IA32_DESCRIPTOR     *Idtr
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(InternalX86WriteGdtr)
ASM_PFX(InternalX86WriteGdtr):
    lgdt    (%rcx)
    ret

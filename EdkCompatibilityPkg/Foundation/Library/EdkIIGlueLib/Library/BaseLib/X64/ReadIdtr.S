#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadIdtr.AS
#
# Abstract:
#
#   AsmReadIdtr function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# VOID
# EFIAPI
# InternalX86ReadIdtr (
#   OUT     IA32_DESCRIPTOR           *Idtr
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(InternalX86ReadIdtr)
ASM_PFX(InternalX86ReadIdtr):
    sidt    (%rcx)
    ret

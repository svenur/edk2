#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadLdtr.Asm
#
# Abstract:
#
#   AsmReadLdtr function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmReadLdtr)

#------------------------------------------------------------------------------
# UINT16
# EFIAPI
# AsmReadLdtr (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmReadLdtr):
    sldt   %eax
    ret

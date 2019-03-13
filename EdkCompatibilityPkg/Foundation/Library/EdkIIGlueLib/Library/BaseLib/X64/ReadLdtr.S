#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadLdtr.AS
#
# Abstract:
#
#   AsmReadLdtr function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINT16
# EFIAPI
# AsmReadLdtr (
#   VOID
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmReadLdtr)
ASM_PFX(AsmReadLdtr):
    sldt    %eax
    ret

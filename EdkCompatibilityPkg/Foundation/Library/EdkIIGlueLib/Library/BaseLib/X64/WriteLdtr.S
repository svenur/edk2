#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   WriteLdtr.S
#
# Abstract:
#
#   AsmWriteLdtr function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# VOID
# EFIAPI
# AsmWriteLdtr (
#   IN UINT16 Ldtr
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmWriteLdtr);
ASM_PFX(AsmWriteLdtr):
    lldt    %cx
    ret

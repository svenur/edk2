#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadFs.S
#
# Abstract:
#
#   AsmReadFs function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINT16
# EFIAPI
# AsmReadFs (
#   VOID
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmReadFs)
ASM_PFX(AsmReadFs):
    mov     %fs, %eax
    ret

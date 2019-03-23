#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadCr0.S
#
# Abstract:
#
#   AsmReadCr0 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmReadCr0 (
#   VOID
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmReadCr0)
ASM_PFX(AsmReadCr0):
    mov     %cr0, %rax
    ret

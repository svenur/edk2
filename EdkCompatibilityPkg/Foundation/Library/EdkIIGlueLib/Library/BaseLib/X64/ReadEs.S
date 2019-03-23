#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadEs.S
#
# Abstract:
#
#   AsmReadEs function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINT16
# EFIAPI
# AsmReadEs (
#   VOID
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmReadEs)
ASM_PFX(AsmReadEs):
    mov     %es, %eax
    ret

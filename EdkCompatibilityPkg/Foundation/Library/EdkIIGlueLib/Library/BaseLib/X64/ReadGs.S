#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadGs.S
#
# Abstract:
#
#   AsmReadGs function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINT16
# EFIAPI
# AsmReadGs (
#   VOID
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmReadGs)
ASM_PFX(AsmReadGs):
    mov     %gs, %eax
    ret

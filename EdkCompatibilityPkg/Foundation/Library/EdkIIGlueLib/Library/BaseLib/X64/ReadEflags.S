#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadEflags.S
#
# Abstract:
#
#   AsmReadEflags function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmReadEflags (
#   VOID
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmReadEflags)
ASM_PFX(AsmReadEflags):
    pushfq
    pop     %rax
    ret

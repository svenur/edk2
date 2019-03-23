#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   WriteCr4.Asm
#
# Abstract:
#
#   AsmWriteCr4 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmWriteCr4 (
#   IN      UINTN                     Cr4
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmWriteCr4)
ASM_PFX(AsmWriteCr4):
    movl    4(%esp), %eax
    movl    %eax, %cr4
    ret

#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   WriteCr0.Asm
#
# Abstract:
#
#   AsmWriteCr0 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmWriteCr0 (
#   IN      UINTN                     Cr0
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmWriteCr0)
ASM_PFX(AsmWriteCr0):
    movl    4(%esp), %eax
    movl    %eax, %cr0
    ret

#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   WriteCr2.Asm
#
# Abstract:
#
#   AsmWriteCr2 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmWriteCr2 (
#   IN      UINTN                     Cr2
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmWriteCr2)
ASM_PFX(AsmWriteCr2):
    movl    4(%esp), %eax
    movl    %eax, %cr2
    ret

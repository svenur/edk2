#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   WriteDr2.Asm
#
# Abstract:
#
#   AsmWriteDr2 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmWriteDr2 (
#   IN UINTN Value
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmWriteDr2)
ASM_PFX(AsmWriteDr2):
    movl    4(%esp), %eax
    movl    %eax, %dr2
    ret

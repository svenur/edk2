#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   WriteDr3.Asm
#
# Abstract:
#
#   AsmWriteDr3 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmWriteDr3 (
#   IN UINTN Value
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmWriteDr3)
ASM_PFX(AsmWriteDr3):
    movl    4(%esp), %eax
    movl    %eax, %dr3
    ret

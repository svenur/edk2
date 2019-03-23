#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   WriteDr6.Asm
#
# Abstract:
#
#   AsmWriteDr6 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmWriteDr6 (
#   IN UINTN Value
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmWriteDr6)
ASM_PFX(AsmWriteDr6):
    movl    4(%esp), %eax
    movl    %eax, %dr6
    ret

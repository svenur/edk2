#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   WriteDr3.S
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
#   UINTN  Value
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmWriteDr3)
ASM_PFX(AsmWriteDr3):
    mov     %rcx, %dr3
    mov     %rcx, %rax
    ret

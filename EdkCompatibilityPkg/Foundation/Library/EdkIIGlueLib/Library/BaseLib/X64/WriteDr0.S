#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   WriteDr0.S
#
# Abstract:
#
#   AsmWriteDr0 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmWriteDr0 (
#   UINTN  Value
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmWriteDr0)
ASM_PFX(AsmWriteDr0):
    mov     %rcx, %dr0
    mov     %rcx, %rax
    ret

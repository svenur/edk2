#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   WriteDr5.S
#
# Abstract:
#
#   AsmWriteDr5 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmWriteDr5 (
#   IN UINTN Value
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmWriteDr5)
ASM_PFX(AsmWriteDr5):
    mov     %rcx, %dr5
    mov     %rcx, %rax
    ret

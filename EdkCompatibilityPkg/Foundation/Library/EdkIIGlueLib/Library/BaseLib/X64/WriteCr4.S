#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   WriteCr4.S
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
#   UINTN  Cr4
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmWriteCr4)
ASM_PFX(AsmWriteCr4):
    mov    %rcx,%cr4
    mov    %rcx,%rax
    ret

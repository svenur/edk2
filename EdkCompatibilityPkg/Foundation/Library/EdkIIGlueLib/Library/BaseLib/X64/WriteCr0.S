#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   WriteCr0.S
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
#   UINTN  Cr0
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmWriteCr0)
ASM_PFX(AsmWriteCr0):
    mov    %rcx,%cr0
    mov    %rcx,%rax
    ret

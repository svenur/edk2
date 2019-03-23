#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   WriteCr3.S
#
# Abstract:
#
#   AsmWriteCr3 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmWriteCr3 (
#   UINTN  Cr3
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmWriteCr3)
ASM_PFX(AsmWriteCr3):
    mov    %rcx,%cr3
    mov    %rcx,%rax
    ret

#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   WriteCr2.S
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
#   UINTN  Cr2
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmWriteCr2)
ASM_PFX(AsmWriteCr2):
    mov    %rcx,%cr2
    mov    %rcx,%rax
    ret

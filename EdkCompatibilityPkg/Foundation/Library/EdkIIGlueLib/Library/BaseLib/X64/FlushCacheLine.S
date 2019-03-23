#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   FlushCacheLine.S
#
# Abstract:
#
#   AsmFlushCacheLine function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# VOID *
# EFIAPI 
# AsmFlushCacheLine (
#   IN      VOID                      *LinearAddress
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmFlushCacheLine)
ASM_PFX(AsmFlushCacheLine):
    clflush (%rdi)
    mov     %rdi, %rax
    ret

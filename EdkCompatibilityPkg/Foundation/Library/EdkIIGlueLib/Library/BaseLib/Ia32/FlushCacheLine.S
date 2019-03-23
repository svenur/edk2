#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   FlushCacheLine.Asm
#
# Abstract:
#
#   AsmFlushCacheLine function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmFlushCacheLine)

#------------------------------------------------------------------------------
# VOID
# EFIAPI
# AsmFlushCacheLine (
#   IN      VOID                      *LinearAddress
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmFlushCacheLine):
    movl    4(%esp), %eax
    clflush (%eax)
    ret

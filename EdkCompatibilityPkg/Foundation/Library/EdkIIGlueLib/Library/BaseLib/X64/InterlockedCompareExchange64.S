#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   InterlockedCompareExchange64.S
#
# Abstract:
#
#   InterlockedCompareExchange64 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINT64
# EFIAPI
# InterlockedCompareExchange64 (
#   IN      UINT64                    *Value,
#   IN      UINT64                    CompareValue,
#   IN      UINT64                    ExchangeValue
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(InternalSyncCompareExchange64)
ASM_PFX(InternalSyncCompareExchange64):
    mov     %rsi, %rax
    lock    cmpxchg %rdx,(%rdi)
    ret

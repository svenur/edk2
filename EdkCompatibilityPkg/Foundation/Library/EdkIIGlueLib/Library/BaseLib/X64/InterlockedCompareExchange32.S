#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   InterlockedCompareExchange32.Asm
#
# Abstract:
#
#   InterlockedCompareExchange32 function
#
# Notes:
#
#------------------------------------------------------------------------------
#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINT32
# EFIAPI
# InterlockedCompareExchange32 (
#   IN      UINT32                    *Value,
#   IN      UINT32                    CompareValue,
#   IN      UINT32                    ExchangeValue
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(InternalSyncCompareExchange32)
ASM_PFX(InternalSyncCompareExchange32):
    mov     %edx, %eax
    lock    cmpxchg %r8d, (%rcx)
    ret

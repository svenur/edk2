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
#   InternalSyncCompareExchange32 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(InternalSyncCompareExchange32)

#------------------------------------------------------------------------------
# UINT32
# EFIAPI
# InternalSyncCompareExchange32 (
#   IN      UINT32                    *Value,
#   IN      UINT32                    CompareValue,
#   IN      UINT32                    ExchangeValue
#   );
#------------------------------------------------------------------------------
ASM_PFX(InternalSyncCompareExchange32):
    movl    4(%esp), %ecx
    movl    8(%esp), %eax
    movl    12(%esp), %edx
    lock
    cmpxchgl    %edx, (%ecx)
    ret

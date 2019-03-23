#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   InterlockedIncrement.Asm
#
# Abstract:
#
#   InternalSyncIncrement function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(InternalSyncIncrement)

#------------------------------------------------------------------------------
# UINT32
# EFIAPI
# InternalSyncIncrement (
#   IN      UINT32                    *Value
#   );
#------------------------------------------------------------------------------
ASM_PFX(InternalSyncIncrement):
    movl    4(%esp), %eax
    lock
    incl    (%eax)
    movl    (%eax), %eax
    ret

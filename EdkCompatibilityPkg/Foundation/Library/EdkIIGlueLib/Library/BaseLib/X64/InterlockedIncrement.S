#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   InterlockedIncrement.S
#
# Abstract:
#
#   InterlockedIncrement function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINT32
# EFIAPI
# InterlockedIncrement (
#   IN      UINT32                    *Value
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(InternalSyncIncrement)
ASM_PFX(InternalSyncIncrement):
    lock    incl  (%rcx)
    mov     (%rcx), %eax
    ret

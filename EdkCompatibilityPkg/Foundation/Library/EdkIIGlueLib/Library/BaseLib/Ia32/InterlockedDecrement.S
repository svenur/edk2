#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   InterlockedDecrement.Asm
#
# Abstract:
#
#   InternalSyncDecrement function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(InternalSyncDecrement)

#------------------------------------------------------------------------------
# UINT32
# EFIAPI
# InternalSyncDecrement (
#   IN      UINT32                    *Value
#   );
#------------------------------------------------------------------------------
ASM_PFX(InternalSyncDecrement):
    movl    4(%esp), %eax
    lock
    decl    (%eax)
    movl    (%eax), %eax
    ret

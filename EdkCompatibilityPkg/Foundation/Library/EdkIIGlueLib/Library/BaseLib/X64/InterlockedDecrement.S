#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   InterlockedDecrement.S
#
# Abstract:
#
#   InterlockedDecrement function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINT32
# EFIAPI
# InterlockedDecrement (
#   IN      UINT32                    *Value
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(InternalSyncDecrement)
ASM_PFX(InternalSyncDecrement):
    lock    decl (%rcx)
    mov     (%rcx), %eax
    ret

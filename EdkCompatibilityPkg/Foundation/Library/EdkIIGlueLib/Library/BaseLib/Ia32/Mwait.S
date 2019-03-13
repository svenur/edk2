#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   Mwait.Asm
#
# Abstract:
#
#   AsmMwait function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmMwait)

#------------------------------------------------------------------------------
# UINT64
# EFIAPI
# AsmMwait (
#   IN      UINTN                     Eax,
#   IN      UINTN                     Ecx
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmMwait):
    movl    4(%esp), %eax
    movl    8(%esp), %ecx
    mwait   %eax, %ecx
    ret

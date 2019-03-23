#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   Invd.Asm
#
# Abstract:
#
#   AsmInvd function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmInvd)

#------------------------------------------------------------------------------
# VOID
# EFIAPI
# AsmInvd (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmInvd):
    invd
    ret

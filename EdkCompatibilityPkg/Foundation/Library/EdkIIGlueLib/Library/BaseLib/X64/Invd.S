#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   Invd.S
#
# Abstract:
#
#   AsmInvd function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# VOID
# EFIAPI
# AsmInvd (
#   VOID
#   )#
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmInvd)
ASM_PFX(AsmInvd):
    invd
    ret

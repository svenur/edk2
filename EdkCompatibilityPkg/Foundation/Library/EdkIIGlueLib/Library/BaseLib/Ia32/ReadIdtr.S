#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadIdtr.Asm
#
# Abstract:
#
#   InternalX86ReadIdtr function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(InternalX86ReadIdtr)

#------------------------------------------------------------------------------
# VOID
# EFIAPI
# InternalX86ReadIdtr (
#   OUT IA32_DESCRIPTOR  *Idtr
#   );
#------------------------------------------------------------------------------
ASM_PFX(InternalX86ReadIdtr):
    movl    4(%esp), %eax
    sidt    (%eax)
    ret

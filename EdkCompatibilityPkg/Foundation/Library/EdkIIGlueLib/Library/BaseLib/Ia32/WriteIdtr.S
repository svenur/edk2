#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   WriteIdtr.Asm
#
# Abstract:
#
#   InternalX86WriteIdtr function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

#------------------------------------------------------------------------------
# VOID
# EFIAPI
# InternalX86WriteIdtr (
#   OUT IA32_DESCRIPTOR  *Idtr
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(InternalX86WriteIdtr)
ASM_PFX(InternalX86WriteIdtr):
    movl    4(%esp), %eax
    lidt    (%eax)
    ret

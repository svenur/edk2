#------------------------------------------------------------------------------
#
# Copyright (c) 2008, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   SupportItpDebug.S
# 
# Abstract:
# 
#   This is the code for debuging X64, to add a break hook at loading every module
#
#------------------------------------------------------------------------------
#include <EfiBind.h>

  .text

.globl ASM_PFX(AsmEfiSetBreakSupport)

#------------------------------------------------------------------------------
#  VOID
#  AsmEfiSetBreakSupport (
#    IN UINTN  LoadAddr    // rcx
#    )
#------------------------------------------------------------------------------

ASM_PFX(AsmEfiSetBreakSupport):

    movw $60000, %dx
    outl %eax, %dx
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    ret





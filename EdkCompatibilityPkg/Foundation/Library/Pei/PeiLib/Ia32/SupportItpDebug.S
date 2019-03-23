#------------------------------------------------------------------------------
#
# Copyright (c) 2008, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   SupportItpDebug.asm
# 
# Abstract:
# 
#   This is the code for debuging IA32, to add a break hook at loading every module
#
#------------------------------------------------------------------------------
#include <EfiBind.h>

# PROC:PRIVATE
  .686P: 
  .MMX: 
  #.MODEL SMALL
  .CODE: 

#------------------------------------------------------------------------------
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmEfiSetBreakSupport)  

#  VOID
#  AsmEfiSetBreakSupport (
#    IN UINTN  LoadAddr
#    )
#------------------------------------------------------------------------------
ASM_PFX(AsmEfiSetBreakSupport):
    push %ebp
    mov  %esp, %ebp
    mov  0x8(%ebp),%eax
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
    ret

#AsmEfiSetBreakSupport ENDP


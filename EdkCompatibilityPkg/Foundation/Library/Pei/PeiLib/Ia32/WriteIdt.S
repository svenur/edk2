#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   WriteIdt.Asm
#
# Abstract:
#
#   SetIdtBase function
#
# Notes:
#
#include "EfiBind.h"
#------------------------------------------------------------------------------

    .586: 
    #.MODEL flat,C
    .code: 
#------------------------------------------------------------------------------

.globl ASM_PFX(SetIdtBase)

# void
# SetIdtBase (
#   UINT32  IdtBase,
#   UINT16  IdtLimit 
#   )
#
# Abstract: Set IDTR with the given physical address
#
ASM_PFX(SetIdtBase):
   push   %ebp
   mov    %esp,%ebp
   add    $0xfffffff8,%esp
   mov    0x8(%ebp),%eax
   mov    0xc(%ebp),%cx
   mov    %eax,0xfffffffc(%ebp)
   mov    %cx,0xfffffffa(%ebp)
   lidtl  0xfffffffa(%ebp)
   leave  
   ret    

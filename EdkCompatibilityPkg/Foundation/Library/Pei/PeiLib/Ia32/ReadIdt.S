#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadIdtBase.Asm
#
# Abstract:
#
#   ReadIdtBase function
#
# Notes:
#
#include "EfiBind.h"
#------------------------------------------------------------------------------

    .586: 
    #.MODEL flat,C
    .code: 

.globl ASM_PFX(ReadIdtBasea)
.globl ASM_PFX(ReadIdtLimita)

#------------------------------------------------------------------------------
# UINTN
# ReadIdtBase (
#   void
#   )
#
# Abstract: Returns physical address of IDTR
#
ASM_PFX(ReadIdtBasea):
   push   %ebp
   mov    %esp,%ebp
   add    $0xfffffff8,%esp
   sidtl  0xfffffffa(%ebp)
   mov    0xfffffffc(%ebp),%eax
   leave  
   ret    



#------------------------------------------------------------------------------
# UINT16
# ReadIdtLimit (
#   void
#   )
#
# Abstract: Returns Limit of IDTR
#
ASM_PFX(ReadIdtLimita):
   push   %ebp
   mov    %esp,%ebp
   add    $0xfffffff8,%esp
   sidtl  0xfffffffa(%ebp)
   mov    0xfffffffa(%ebp),%ax
   leave  
   ret    




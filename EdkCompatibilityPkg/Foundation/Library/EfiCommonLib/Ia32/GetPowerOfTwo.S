#/*++
#
#Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
#SPDX-License-Identifier: BSD-2-Clause-Patent
#
#Module Name:
#
#  GetPowerOfTwo.c
#
#Abstract:
#
#  Calculates the largest integer that is both 
#  a power of two and less than Input
#
#--*/
#include "EfiBind.h"
#---------------------------------------------------------------------------
    .686: 
    #.MODEL flat,C
    .code: 

#---------------------------------------------------------------------------
.globl ASM_PFX(GetPowerOfTwo)
#UINT64
#GetPowerOfTwo (
#  IN UINT64   Input
#  )
#/*++
#
#Routine Description:
#
#  Calculates the largest integer that is both 
#  a power of two and less than Input
#
#Arguments:
#
#  Input  - value to calculate power of two
#
#Returns:
#
#  the largest integer that is both  a power of 
#  two and less than Input
#
#--*/
ASM_PFX(GetPowerOfTwo):
    xorl    %eax, %eax
    movl    %eax, %edx
    movl    8(%esp), %ecx  # dword ptr Input[4]
    jecxz   _F
    bsrl    %ecx, %ecx
    btsl    %ecx, %edx
    jmp     _Exit
_F: 
    movl    4(%esp), %ecx  # dword ptr Input[0]
    jecxz   _Exit
    bsrl    %ecx, %ecx
    btsl    %ecx, %eax
_Exit: 

    ret
#GetPowerOfTwo ENDP


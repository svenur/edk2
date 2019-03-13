#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   SetJump.Asm
#
# Abstract:
#
#   Implementation of SetJump() on IA-32.
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(SetJump), ASM_PFX(InternalAssertJumpBuffer)

#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# SetJump (
#   OUT     BASE_LIBRARY_JUMP_BUFFER  *JumpBuffer
#   );
#------------------------------------------------------------------------------
ASM_PFX(SetJump):
    pushl   0x4(%esp)
    call    ASM_PFX(InternalAssertJumpBuffer)
    pop     %ecx
    pop     %ecx
    movl    (%esp), %edx
    movl    %ebx, (%edx)
    movl    %esi, 4(%edx)
    movl    %edi, 8(%edx)
    movl    %ebp, 12(%edx)
    movl    %esp, 16(%edx)
    movl    %ecx, 20(%edx)
    xorl    %eax, %eax
    jmp     *%ecx

#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   LongJump.Asm
#
# Abstract:
#
#   Implementation of _LongJump() on IA-32.
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(InternalLongJump)

#------------------------------------------------------------------------------
# VOID
# EFIAPI
# InternalLongJump (
#   IN      BASE_LIBRARY_JUMP_BUFFER  *JumpBuffer,
#   IN      UINTN                     Value
#   );
#------------------------------------------------------------------------------
ASM_PFX(InternalLongJump):
    pop     %eax
    pop     %edx
    pop     %eax
    movl    (%edx), %ebx
    movl    4(%edx), %esi
    movl    8(%edx), %edi
    movl    12(%edx), %ebp
    movl    16(%edx), %esp
    jmp     *20(%edx)

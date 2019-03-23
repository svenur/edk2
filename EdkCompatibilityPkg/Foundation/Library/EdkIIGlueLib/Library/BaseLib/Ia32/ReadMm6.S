#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadMm6.Asm
#
# Abstract:
#
#   AsmReadMm6 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmReadMm6)

#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmReadMm6 (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmReadMm6):
    push    %eax
    push    %eax
    movq    %mm6, (%esp)
    pop     %eax
    pop     %edx
    ret

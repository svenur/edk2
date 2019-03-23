#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadMm3.Asm
#
# Abstract:
#
#   AsmReadMm3 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmReadMm3)

#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmReadMm3 (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmReadMm3):
    push    %eax
    push    %eax
    movq    %mm3, (%esp)
    pop     %eax
    pop     %edx
    ret

#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadMm1.Asm
#
# Abstract:
#
#   AsmReadMm1 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmReadMm1)

#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmReadMm1 (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmReadMm1):
    push    %eax
    push    %eax
    movq    %mm1, (%esp)
    pop     %eax
    pop     %edx
    ret

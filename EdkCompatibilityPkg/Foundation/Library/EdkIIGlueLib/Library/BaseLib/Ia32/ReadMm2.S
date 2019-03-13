#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadMm2.Asm
#
# Abstract:
#
#   AsmReadMm2 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmReadMm2)

#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmReadMm2 (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmReadMm2):
    push    %eax
    push    %eax
    movq    %mm2, (%esp)
    pop     %eax
    pop     %edx
    ret

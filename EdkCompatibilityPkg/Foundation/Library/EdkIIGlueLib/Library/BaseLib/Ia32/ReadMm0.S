#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadMm0.Asm
#
# Abstract:
#
#   AsmReadMm0 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmReadMm0)

#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmReadMm0 (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmReadMm0):
    push    %eax
    push    %eax
    movq    %mm0, (%esp)
    pop     %eax
    pop     %edx
    ret

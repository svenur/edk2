#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadMm5.Asm
#
# Abstract:
#
#   AsmReadMm5 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmReadMm5)

#------------------------------------------------------------------------------
# UINTN
# EFIAPI
# AsmReadMm5 (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmReadMm5):
    push    %eax
    push    %eax
    movq    %mm5, (%esp)
    pop     %eax
    pop     %edx
    ret

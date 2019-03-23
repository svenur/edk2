#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadMm7.S
#
# Abstract:
#
#   AsmReadMm7 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINT64
# EFIAPI
# AsmReadMm7 (
#   VOID
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmReadMm7)
ASM_PFX(AsmReadMm7):
    #DB      48h, 0fh, 7eh, 0f8h
    movd	%mm7, %rax
    ret

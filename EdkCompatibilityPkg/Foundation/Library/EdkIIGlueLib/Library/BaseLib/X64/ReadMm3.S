#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadMm3.S
#
# Abstract:
#
#   AsmReadMm3 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINT64
# EFIAPI
# AsmReadMm3 (
#   VOID
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmReadMm3)
ASM_PFX(AsmReadMm3):
    #DB      48h, 0fh, 7eh, 0d8h
    movd	%mm3, %rax
    ret

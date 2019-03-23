#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadMm1.S
#
# Abstract:
#
#   AsmReadMm1 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINT64
# EFIAPI
# AsmReadMm1 (
#   VOID
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmReadMm1)
ASM_PFX(AsmReadMm1):
    #DB      48h, 0fh, 7eh, 0c8h
    movd	%mm1, %rax
    ret

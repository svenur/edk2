#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadMm5.S
#
# Abstract:
#
#   AsmReadMm5 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINT64
# EFIAPI
# AsmReadMm5 (
#   VOID
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmReadMm5)
ASM_PFX(AsmReadMm5):
    #DB      48h, 0fh, 7eh, 0e8h
    movd	%mm5, %rax
    ret

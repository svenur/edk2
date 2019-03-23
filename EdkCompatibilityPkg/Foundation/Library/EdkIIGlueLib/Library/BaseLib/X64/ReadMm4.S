#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadMm4.AS
#
# Abstract:
#
#   AsmReadMm4 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINT64
# EFIAPI
# AsmReadMm4 (
#   VOID
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmReadMm4)
ASM_PFX(AsmReadMm4):
    #DB      48h, 0fh, 7eh, 0e0h
    movd	%mm4, %rax
    ret

#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadTsc.S
#
# Abstract:
#
#   AsmReadTsc function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINT64
# EFIAPI
# AsmReadTsc (
#   VOID
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmReadTsc)
ASM_PFX(AsmReadTsc):
    rdtsc
    shl     $0x20, %rdx
    or      %rdx, %rax
    ret

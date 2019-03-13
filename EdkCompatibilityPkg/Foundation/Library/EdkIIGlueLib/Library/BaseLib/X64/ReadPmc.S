#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadPmc.S
#
# Abstract:
#
#   AsmReadPmc function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINT64
# EFIAPI
# AsmReadPmc (
#   IN UINT32   PmcIndex
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmReadPmc)
ASM_PFX(AsmReadPmc):
    rdpmc
    shl     $0x20, %rdx
    or      %rdx, %rax
    ret

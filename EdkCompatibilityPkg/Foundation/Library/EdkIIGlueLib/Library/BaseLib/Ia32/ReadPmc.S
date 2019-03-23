#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadPmc.Asm
#
# Abstract:
#
#   AsmReadPmc function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>

.globl ASM_PFX(AsmReadPmc)

#------------------------------------------------------------------------------
# UINT64
# EFIAPI
# AsmReadPmc (
#   IN UINT32   PmcIndex
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmReadPmc):
    movl    4(%esp), %ecx
    rdpmc
    ret

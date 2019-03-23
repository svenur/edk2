#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   ReadSs.S
#
# Abstract:
#
#   AsmReadSs function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINT16
# EFIAPI
# AsmReadSs (
#   VOID
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmReadSs);
ASM_PFX(AsmReadSs):
    movl     %ss, %eax
    ret

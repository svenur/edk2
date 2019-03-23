#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2008, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   Mwait.S
#
# Abstract:
#
#   AsmMwait function
#
# Notes:
#
#------------------------------------------------------------------------------

ASM_GLOBAL ASM_PFX(AsmMwait)

#------------------------------------------------------------------------------
# UINT64
# EFIAPI
# AsmMwait (
#   IN      UINTN                     Eax,
#   IN      UINTN                     Ecx
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmMwait):
    movl    4(%esp), %eax
    movl    8(%esp), %ecx
    mwait
    ret

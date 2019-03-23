#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2009, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   Monitor.S
#
# Abstract:
#
#   AsmMonitor function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# UINT64
# EFIAPI
# AsmMonitor (
#   IN      UINTN                     Eax,
#   IN      UINTN                     Ecx,
#   IN      UINTN                     Edx
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(AsmMonitor)
ASM_PFX(AsmMonitor):
    mov    %ecx,%eax
    mov    %edx,%ecx
    mov    %r8d,%edx
    monitor
    ret

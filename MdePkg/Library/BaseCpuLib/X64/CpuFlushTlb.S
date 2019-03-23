#------------------------------------------------------------------------------
# Copyright (c) 2006 - 2018, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   CpuFlushTlb.Asm
#
# Abstract:
#
#   CpuFlushTlb function
#
# Notes:
#
#------------------------------------------------------------------------------

ASM_GLOBAL ASM_PFX(CpuFlushTlb)

#------------------------------------------------------------------------------
# VOID
# EFIAPI
# CpuFlushTlb (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(CpuFlushTlb):
    mov     %cr3, %rax
    mov     %rax, %cr3
    ret

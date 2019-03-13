#------------------------------------------------------------------------------
#
# Copyright (c) 2008, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   RuntimeLibAsm.S
#
# Abstract:
#
#
#------------------------------------------------------------------------------
#include <EfiBind.h>

.text

.globl ASM_PFX(EfiCpuFlushCache)
#------------------------------------------------------------------------------
#EFI_STATUS
#EfiCpuFlushCache (
#  IN EFI_PHYSICAL_ADDRESS          Start,
#  IN UINT64                        Length
#  );
#------------------------------------------------------------------------------

ASM_PFX(EfiCpuFlushCache):
    wbinvd
    mov $0, %rax
    ret


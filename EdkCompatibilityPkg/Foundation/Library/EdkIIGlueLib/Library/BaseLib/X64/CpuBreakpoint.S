#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   CpuBreakpoint.S
#
# Abstract:
#
#   Implementation of CpuBreakpoint() on x86_64
#
#------------------------------------------------------------------------------
#include <EdkIIGlueBase.h>

.globl ASM_PFX(CpuBreakpoint)
ASM_PFX(CpuBreakpoint):
	int $0x3
	ret

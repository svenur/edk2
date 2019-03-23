#------------------------------------------------------------------------------
#
# Copyright (c) 2013, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   IntHandler.S
#
# Abstract:
#
#   Assembly interrupt handler function.
#
#------------------------------------------------------------------------------

ASM_GLOBAL ASM_PFX(AsmInterruptHandle)

.text
ASM_PFX(AsmInterruptHandle):
   cli
   movb   $1, %al
   iretq

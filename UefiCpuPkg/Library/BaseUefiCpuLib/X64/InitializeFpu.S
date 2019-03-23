#------------------------------------------------------------------------------
#*
#*   Copyright (c) 2009 - 2018, Intel Corporation. All rights reserved.<BR>
#*   SPDX-License-Identifier: BSD-2-Clause-Patent
#*
#*
#------------------------------------------------------------------------------

#
# Initializes floating point units for requirement of UEFI specification.
#
# This function initializes floating-point control word to 0x037F (all exceptions
# masked,double-extended-precision, round-to-nearest) and multimedia-extensions control word
# (if supported) to 0x1F80 (all exceptions masked, round-to-nearest, flush to zero
# for masked underflow).
#
ASM_GLOBAL ASM_PFX(InitializeFloatingPointUnits)
ASM_PFX(InitializeFloatingPointUnits):

    #
    # Initialize floating point units
    #
    finit

    #
    # Float control word initial value:
    # all exceptions masked, double-precision, round-to-nearest
    #
    pushq   $0x037F
    lea     (%rsp), %rax
    fldcw   (%rax)
    popq    %rax

    #
    # Set OSFXSR bit 9 in CR4
    #
    movq    %cr4, %rax
    or      $0x200, %rax
    movq    %rax, %cr4

    #
    # Multimedia-extensions control word:
    # all exceptions masked, round-to-nearest, flush to zero for masked underflow
    #
    pushq   $0x01F80
    lea     (%rsp), %rax
    ldmxcsr (%rax)
    popq    %rax

    ret


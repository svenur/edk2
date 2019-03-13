#------------------------------------------------------------------------------
#
# Copyright (c) 2006 - 2018, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   SetMem.S
#
# Abstract:
#
#   SetMem function
#
# Notes:
#
#------------------------------------------------------------------------------
#------------------------------------------------------------------------------
#  VOID *
#  EFIAPI
#  InternalMemSetMem (
#    IN VOID   *Buffer,
#    IN UINTN  Count,
#    IN UINT8  Value
#    )
#------------------------------------------------------------------------------
ASM_GLOBAL ASM_PFX(InternalMemSetMem)
ASM_PFX(InternalMemSetMem):
    pushq   %rdi
    pushq   %rbx
    pushq   %rcx        # push Buffer
    movq    %r8, %rax   # rax = Value
    andq    $0xff, %rax # rax = lower 8 bits of r8, upper 56 bits are 0
    movb    %al, %ah    # ah  = al
    movw    %ax, %bx    # bx  = ax
    shlq    $0x10, %rax # rax = ax << 16
    movw    %bx,  %ax   # ax  = bx
    movq    %rax, %rbx  # ebx = eax
    shlq    $0x20, %rax # rax = rax << 32
    orq     %rbx, %rax  # eax = ebx
    movq    %rcx, %rdi  # rdi = Buffer
    movq    %rdx, %rcx  # rcx = Count
    shrq    $3, %rcx    # rcx = rcx / 8
    cld
    rep     stosq
    movq    %rdx, %rcx  # rcx = rdx
    andq    $7, %rcx    # rcx = rcx & 7
    rep     stosb
    popq    %rax        # rax = Buffer
    popq    %rbx
    popq    %rdi
    ret

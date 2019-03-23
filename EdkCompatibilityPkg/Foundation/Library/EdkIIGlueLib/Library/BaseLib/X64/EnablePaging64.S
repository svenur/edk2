#------------------------------------------------------------------------------
#
# Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# Module Name:
#
#   EnablePaging64.S
#
# Abstract:
#
#   AsmEnablePaging64 function
#
# Notes:
#
#------------------------------------------------------------------------------

#include <EdkIIGlueBase.h>
#------------------------------------------------------------------------------
# VOID
# EFIAPI
# InternalX86EnablePaging64 (
#   IN      UINT16                    Cs,			%rdi
#   IN      UINT64                    EntryPoint,		%rsi
#   IN      UINT64                    Context1,  OPTIONAL	%rdx
#   IN      UINT64                    Context2,  OPTIONAL	%rcx
#   IN      UINT64                    NewStack			%r8
#   );
#------------------------------------------------------------------------------
.globl ASM_PFX(InternalX86EnablePaging64)
ASM_PFX(InternalX86EnablePaging64):
    cli    
    pop    %rax
    callq  Base
Base:
    addl   $(L1-Base),(%rsp)
    mov    %cr4,%rax
    or     $0x20,%al
    mov    %rax,%cr4
    mov    $0xc0000080,%ecx
    rdmsr  
    or     $0x1,%ah
    wrmsr  
    mov    %cr0,%rax
    bts    $0x1f,%eax
    mov    %rax,%cr0
    lret   
L1:
    addr32 mov (%esp),%rbx
    addr32 mov 0x8(%esp),%rcx
    addr32 mov 0x10(%esp),%rdx
    addr32 mov 0x18(%esp),%rsp
    add    $-0x20,%rsp
    callq  *%rbx
    jmp    .

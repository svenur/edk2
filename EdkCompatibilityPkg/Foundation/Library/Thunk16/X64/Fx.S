#*****************************************************************************
#*
#*   Copyright (c) 2008, Intel Corporation. All rights reserved.<BR>
#*   SPDX-License-Identifier: BSD-2-Clause-Patent
#*   
#*   Module Name:
#*
#*    Fx.S
#*  
#*   Abstract:
#*  
#*    AsmFxRestore and AsmFxSave function
#*  
#*****************************************************************************
#include <EfiBind.h>

.globl ASM_PFX(AsmFxSave)
.globl ASM_PFX(AsmFxRestore)

    .text

#------------------------------------------------------------------------------
# VOID
# AsmFxSave (
#   OUT IA32_FX_BUFFER *Buffer
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmFxSave):
    fxsave (%rcx)
    retq
    
#------------------------------------------------------------------------------
# VOID
# AsmFxRestore (
#   IN CONST IA32_FX_BUFFER *Buffer
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmFxRestore):
    fxrstor (%rcx)
    retq

#------------------------------------------------------------------------------
# UINTN
# AsmGetEflags (
#   VOID
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmGetEflags):
    pushfq
    popq  %rax
    ret
#AsmGetEflags ENDP

#------------------------------------------------------------------------------
# VOID
# AsmSetEflags (
#   IN UINTN   Eflags
#   );
#------------------------------------------------------------------------------
ASM_PFX(AsmSetEflags):
    pushq  %rcx
    popfq
    ret
#AsmSetEflags ENDP

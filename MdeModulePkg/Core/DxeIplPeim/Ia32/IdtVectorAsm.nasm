;/** @file
;
;    IDT vector entry.
;
;  Copyright (c) 2007 - 2018, Intel Corporation. All rights reserved.<BR>
;  This program and the accompanying materials
;  are licensed and made available under the terms and conditions of the BSD License
;  which accompanies this distribution.  The full text of the license may be found at
;  http://opensource.org/licenses/bsd-license.php
;
;  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
;  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
;
;**/

%pragma macho subsections_via_symbols

    SECTION .text

;
;------------------------------------------------------------------------------
;  Generic IDT Vector Handlers for the Host.
;
;------------------------------------------------------------------------------

ALIGN   8
global ASM_PFX(AsmGetVectorTemplatInfo)
global ASM_PFX(AsmVectorFixup)

L_VectorTemplateBase:
        push  eax
        db    0x6a       ; push #VectorNumber
L_VectorNum:
        db    0
        mov   eax, L_CommonInterruptEntry
        jmp   eax
L_VectorTemplateEnd:

global ASM_PFX(AsmGetVectorTemplatInfo)
ASM_PFX(AsmGetVectorTemplatInfo):
        mov   ecx, [esp + 4]
        mov   dword [ecx], L_VectorTemplateBase
        mov   eax, (L_VectorTemplateEnd - L_VectorTemplateBase)
        ret

global ASM_PFX(AsmVectorFixup)
ASM_PFX(AsmVectorFixup):
        mov   eax, dword [esp + 8]
        mov   ecx, [esp + 4]
        mov   [ecx + (L_VectorNum - L_VectorTemplateBase)], al
        ret

;---------------------------------------;
; L_CommonInterruptEntry                  ;
;---------------------------------------;
; The follow algorithm is used for the common interrupt routine.

;
; +---------------------+ <-- 16-byte aligned ensured by processor
; +    Old SS           +
; +---------------------+
; +    Old RSP          +
; +---------------------+
; +    RFlags           +
; +---------------------+
; +    CS               +
; +---------------------+
; +    RIP              +
; +---------------------+
; +    Error Code       +
; +---------------------+
; +    Vector Number    +
; +---------------------+

L_CommonInterruptEntry:
  cli

  jmp $


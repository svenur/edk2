;------------------------------------------------------------------------------
;
; Copyright (c) 2006 - 2018, Intel Corporation. All rights reserved.<BR>
; This program and the accompanying materials
; are licensed and made available under the terms and conditions of the BSD License
; which accompanies this distribution.  The full text of the license may be found at
; http://opensource.org/licenses/bsd-license.php.
;
; THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
; WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
;
; Module Name:
;
;   Mwait.Asm
;
; Abstract:
;
;   AsmMwait function
;
; Notes:
;
;------------------------------------------------------------------------------

%pragma macho subsections_via_symbols

    DEFAULT REL
    SECTION .text

;------------------------------------------------------------------------------
; UINT64
; EFIAPI
; AsmMwait (
;   IN      UINTN                     Eax,
;   IN      UINTN                     Ecx
;   );
;------------------------------------------------------------------------------
global ASM_PFX(AsmMwait)
ASM_PFX(AsmMwait):
    mov     eax, ecx
    mov     ecx, edx
    DB      0xf, 1, 0xc9                ; mwait
    ret


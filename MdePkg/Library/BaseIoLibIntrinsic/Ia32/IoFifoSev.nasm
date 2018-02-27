;------------------------------------------------------------------------------
;
; Copyright (c) 2006 - 2018, Intel Corporation. All rights reserved.<BR>
; Copyright (c) 2017, AMD Incorporated. All rights reserved.<BR>
;
; This program and the accompanying materials are licensed and made available
; under the terms and conditions of the BSD License which accompanies this
; distribution.  The full text of the license may be found at
; http://opensource.org/licenses/bsd-license.php.
;
; THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
; WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
;
;------------------------------------------------------------------------------

%pragma macho subsections_via_symbols

    SECTION .text

;------------------------------------------------------------------------------
; Check whether we need to unroll the String I/O under SEV guest
;
; Return // eax   (1 - unroll, 0 - no unroll)
;------------------------------------------------------------------------------
global ASM_PFX(SevNoRepIo)
ASM_PFX(SevNoRepIo):

  ; CPUID clobbers ebx, ecx and edx
  push      ebx
  push      ecx
  push      edx

  ; Check if we are running under hypervisor
  ; CPUID(1).ECX Bit 31
  mov       eax, 1
  cpuid
  bt        ecx, 31
  jnc       L_UseRepIo

  ; Check if we have Memory encryption CPUID leaf
  mov       eax, 0x80000000
  cpuid
  cmp       eax, 0x8000001f
  jl        L_UseRepIo

  ; Check for memory encryption feature:
  ;  CPUID  Fn8000_001F[EAX] - Bit 1
  ;
  mov       eax,  0x8000001f
  cpuid
  bt        eax, 1
  jnc       L_UseRepIo

  ; Check if memory encryption is enabled
  ;  MSR_0xC0010131 - Bit 0 (SEV enabled)
  ;  MSR_0xC0010131 - Bit 1 (SEV-ES enabled)
  mov       ecx, 0xc0010131
  rdmsr

  ; Check for (SevEsEnabled == 0 && SevEnabled == 1)
  and       eax, 3
  cmp       eax, 1
  je        L_SevNoRepIo_Done

L_UseRepIo:
  xor       eax, eax

L_SevNoRepIo_Done:
  pop       edx
  pop       ecx
  pop       ebx
  ret

;------------------------------------------------------------------------------
;  VOID
;  EFIAPI
;  IoReadFifo8 (
;    IN  UINTN                 Port,
;    IN  UINTN                 Size,
;    OUT VOID                  *Buffer
;    );
;------------------------------------------------------------------------------
global ASM_PFX(IoReadFifo8)
ASM_PFX(IoReadFifo8):
    push    edi
    mov     dx, [esp + 8]
    mov     ecx, [esp + 12]
    mov     edi, [esp + 16]

    ; Check if we need to unroll String I/O
    call    ASM_PFX(SevNoRepIo)
    test    eax, eax
    jnz     L_IoReadFifo8_NoRep

    cld
    rep     insb
    jmp     L_IoReadFifo8_Done

L_IoReadFifo8_NoRep:
    jecxz   L_IoReadFifo8_Done

L_IoReadFifo8_Loop:
    in      al, dx
    mov     byte [edi], al
    inc     edi
    loop    L_IoReadFifo8_Loop

L_IoReadFifo8_Done:
    pop     edi
    ret

;------------------------------------------------------------------------------
;  VOID
;  EFIAPI
;  IoReadFifo16 (
;    IN  UINTN                 Port,
;    IN  UINTN                 Size,
;    OUT VOID                  *Buffer
;    );
;------------------------------------------------------------------------------
global ASM_PFX(IoReadFifo16)
ASM_PFX(IoReadFifo16):
    push    edi
    mov     dx, [esp + 8]
    mov     ecx, [esp + 12]
    mov     edi, [esp + 16]

    ; Check if we need to unroll String I/O
    call    ASM_PFX(SevNoRepIo)
    test    eax, eax
    jnz     L_IoReadFifo16_NoRep

    cld
    rep     insw
    jmp     L_IoReadFifo16_Done

L_IoReadFifo16_NoRep:
    jecxz   L_IoReadFifo16_Done

L_IoReadFifo16_Loop:
    in      ax, dx
    mov     word [edi], ax
    add     edi, 2
    loop    L_IoReadFifo16_Loop

L_IoReadFifo16_Done:
    pop     edi
    ret

;------------------------------------------------------------------------------
;  VOID
;  EFIAPI
;  IoReadFifo32 (
;    IN  UINTN                 Port,
;    IN  UINTN                 Size,
;    OUT VOID                  *Buffer
;    );
;------------------------------------------------------------------------------
global ASM_PFX(IoReadFifo32)
ASM_PFX(IoReadFifo32):
    push    edi
    mov     dx, [esp + 8]
    mov     ecx, [esp + 12]
    mov     edi, [esp + 16]

    ; Check if we need to unroll String I/O
    call    ASM_PFX(SevNoRepIo)
    test    eax, eax
    jnz     L_IoReadFifo32_NoRep

    cld
    rep     insd
    jmp     L_IoReadFifo32_Done

L_IoReadFifo32_NoRep:
    jecxz   L_IoReadFifo32_Done

L_IoReadFifo32_Loop:
    in      eax, dx
    mov     dword [edi], eax
    add     edi, 4
    loop    L_IoReadFifo32_Loop

L_IoReadFifo32_Done:
    pop     edi
    ret

;------------------------------------------------------------------------------
;  VOID
;  EFIAPI
;  IoWriteFifo8 (
;    IN UINTN                  Port,
;    IN UINTN                  Size,
;    IN VOID                   *Buffer
;    );
;------------------------------------------------------------------------------
global ASM_PFX(IoWriteFifo8)
ASM_PFX(IoWriteFifo8):
    push    esi
    mov     dx, [esp + 8]
    mov     ecx, [esp + 12]
    mov     esi, [esp + 16]

    ; Check if we need to unroll String I/O
    call    ASM_PFX(SevNoRepIo)
    test    eax, eax
    jnz     L_IoWriteFifo8_NoRep

    cld
    rep     outsb
    jmp     L_IoWriteFifo8_Done

L_IoWriteFifo8_NoRep:
    jecxz   L_IoWriteFifo8_Done

L_IoWriteFifo8_Loop:
    mov     al, byte [esi]
    out     dx, al
    inc     esi
    loop    L_IoWriteFifo8_Loop

L_IoWriteFifo8_Done:
    pop     esi
    ret

;------------------------------------------------------------------------------
;  VOID
;  EFIAPI
;  IoWriteFifo16 (
;    IN UINTN                  Port,
;    IN UINTN                  Size,
;    IN VOID                   *Buffer
;    );
;------------------------------------------------------------------------------
global ASM_PFX(IoWriteFifo16)
ASM_PFX(IoWriteFifo16):
    push    esi
    mov     dx, [esp + 8]
    mov     ecx, [esp + 12]
    mov     esi, [esp + 16]

    ; Check if we need to unroll String I/O
    call    ASM_PFX(SevNoRepIo)
    test    eax, eax
    jnz     L_IoWriteFifo16_NoRep

    cld
    rep     outsw
    jmp     L_IoWriteFifo16_Done

L_IoWriteFifo16_NoRep:
    jecxz   L_IoWriteFifo16_Done

L_IoWriteFifo16_Loop:
    mov     ax, word [esi]
    out     dx, ax
    add     esi, 2
    loop    L_IoWriteFifo16_Loop

L_IoWriteFifo16_Done:
    pop     esi
    ret

;------------------------------------------------------------------------------
;  VOID
;  EFIAPI
;  IoWriteFifo32 (
;    IN UINTN                  Port,
;    IN UINTN                  Size,
;    IN VOID                   *Buffer
;    );
;------------------------------------------------------------------------------
global ASM_PFX(IoWriteFifo32)
ASM_PFX(IoWriteFifo32):
    push    esi
    mov     dx, [esp + 8]
    mov     ecx, [esp + 12]
    mov     esi, [esp + 16]

    ; Check if we need to unroll String I/O
    call    ASM_PFX(SevNoRepIo)
    test    eax, eax
    jnz     L_IoWriteFifo32_NoRep

    cld
    rep     outsd
    jmp     L_IoWriteFifo32_Done

L_IoWriteFifo32_NoRep:
    jecxz   L_IoWriteFifo32_Done

L_IoWriteFifo32_Loop:
    mov     eax, dword [esi]
    out     dx, eax
    add     esi, 4
    loop    L_IoWriteFifo32_Loop

L_IoWriteFifo32_Done:
    pop     esi
    ret


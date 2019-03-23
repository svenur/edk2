;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ScanMem64.Asm
;
; Abstract:
;
;   ScanMem64 function
;
; Notes:
;
;   The following BaseMemoryLib instances share the same version of this file:
;
;       BaseMemoryLibRepStr
;       BaseMemoryLibMmx
;       BaseMemoryLibSse2
;
;------------------------------------------------------------------------------

    .686
    .model  flat,C
    .code

;------------------------------------------------------------------------------
; CONST VOID *
; EFIAPI
; InternalMemScanMem64 (
;   IN      CONST VOID                *Buffer,
;   IN      UINTN                     Length,
;   IN      UINT64                    Value
;   );
;------------------------------------------------------------------------------
InternalMemScanMem64    PROC    USES    edi
    mov     ecx, [esp + 12]
    mov     eax, [esp + 16]
    mov     edx, [esp + 20]
    mov     edi, [esp + 8]
@@:
    cmp     eax, [edi]
    lea     edi, [edi + 8]
    loopne  @B
    jne     @F
    cmp     edx, [edi - 4]
    jecxz   @F
    jne     @B
@@:
    lea     eax, [edi - 8]
    cmovne  eax, ecx
    ret
InternalMemScanMem64    ENDP

    END

;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   CompareMem.Asm
;
; Abstract:
;
;   CompareMem function
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
; INTN
; EFIAPI
; InternalMemCompareMem (
;   IN      CONST VOID                *DestinationBuffer,
;   IN      CONST VOID                *SourceBuffer,
;   IN      UINTN                     Length
;   );
;------------------------------------------------------------------------------
InternalMemCompareMem   PROC    USES    esi edi
    mov     esi, [esp + 12]
    mov     edi, [esp + 16]
    mov     ecx, [esp + 20]
    repe    cmpsb
    movzx   eax, byte ptr [esi - 1]
    movzx   edx, byte ptr [edi - 1]
    sub     eax, edx
    ret
InternalMemCompareMem   ENDP

    END

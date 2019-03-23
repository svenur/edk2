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
InternalMemCompareMem   PROC    USES    rsi rdi
    mov     rsi, rcx
    mov     rdi, rdx
    mov     rcx, r8
    repe    cmpsb
    movzx   rax, byte ptr [rsi - 1]
    movzx   rdx, byte ptr [rdi - 1]
    sub     rax, rdx
    ret
InternalMemCompareMem   ENDP

    END

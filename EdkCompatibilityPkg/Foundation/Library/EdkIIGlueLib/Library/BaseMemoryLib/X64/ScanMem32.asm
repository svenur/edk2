;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ScanMem32.Asm
;
; Abstract:
;
;   ScanMem32 function
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
; CONST VOID *
; EFIAPI
; InternalMemScanMem32 (
;   IN      CONST VOID                *Buffer,
;   IN      UINTN                     Length,
;   IN      UINT32                    Value
;   );
;------------------------------------------------------------------------------
InternalMemScanMem32    PROC    USES    rdi
    mov     rdi, rcx
    mov     rax, r8
    mov     rcx, rdx
    repne   scasd
    lea     rax, [rdi - 4]
    cmovnz  rax, rcx
    ret
InternalMemScanMem32    ENDP

    END

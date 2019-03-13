; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   InterlockedCompareExchange32.Asm
;
; Abstract:
;
;   InterlockedCompareExchange32 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINT32
; EFIAPI
; InterlockedCompareExchange32 (
;   IN      UINT32                    *Value,
;   IN      UINT32                    CompareValue,
;   IN      UINT32                    ExchangeValue
;   );
;------------------------------------------------------------------------------
InternalSyncCompareExchange32   PROC
    mov     eax, edx
    lock    cmpxchg [rcx], r8d
    ret
InternalSyncCompareExchange32   ENDP

    END

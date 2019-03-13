;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadIdtBase.Asm
;
; Abstract:
;
;   ReadIdtBase function
;
; Notes:
;
;------------------------------------------------------------------------------

    .586
    .model  flat,C
    .mmx
    .code

;------------------------------------------------------------------------------
; UINTN
; ReadIdtBase (
;   void
;   )
;
; Abstract: Returns physical address of IDTR
;
ReadIdtBase     PROC    C PUBLIC
                LOCAL   IdtrBuf:FWORD
                sidt    IdtrBuf
                mov     eax, DWORD PTR IdtrBuf + 2
                ret
ReadIdtBase     ENDP

;------------------------------------------------------------------------------
; UINT16
; ReadIdtLimit (
;   void
;   )
;
; Abstract: Returns Limit of IDTR
;
ReadIdtLimit    PROC    C PUBLIC
                LOCAL   IdtrBuf:FWORD
                sidt    IdtrBuf
                mov     ax, WORD PTR IdtrBuf
                ret
ReadIdtLimit    ENDP


    END

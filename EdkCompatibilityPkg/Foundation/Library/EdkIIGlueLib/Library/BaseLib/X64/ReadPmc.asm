; Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ReadPmc.Asm
;
; Abstract:
;
;   AsmReadPmc function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; UINT64
; EFIAPI
; AsmReadPmc (
;   IN UINT32   PmcIndex
;   );
;------------------------------------------------------------------------------
AsmReadPmc  PROC
    rdpmc
    shl     rdx, 20h
    or      rax, rdx
    ret
AsmReadPmc  ENDP

    END

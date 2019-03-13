;------------------------------------------------------------------------------
;
; Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   RuntimeLibAsm.asm
;
; Abstract:
;
;
;------------------------------------------------------------------------------

.code

;------------------------------------------------------------------------------
;EFI_STATUS
;EfiCpuFlushCache (
;  IN EFI_PHYSICAL_ADDRESS          Start,
;  IN UINT64                        Length
;  );
;------------------------------------------------------------------------------

EfiCpuFlushCache PROC    PUBLIC
    wbinvd
    mov rax, 0
    ret
EfiCpuFlushCache ENDP

END
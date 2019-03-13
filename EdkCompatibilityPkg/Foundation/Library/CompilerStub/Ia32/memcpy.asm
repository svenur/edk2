;------------------------------------------------------------------------------
;
; Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   CopyMem.asm
;
; Abstract:
;
;   memcpy function
;
; Notes:
;
;------------------------------------------------------------------------------

    .686
    .model  flat,C
    .mmx
    .code

;------------------------------------------------------------------------------
;  VOID *
;  memcpy (
;    IN VOID   *Destination,
;    IN VOID   *Source,
;    IN UINTN  Count
;    );
;------------------------------------------------------------------------------
memcpy  PROC    USES    esi edi
    mov     esi, [esp + 16]             ; esi <- Source
    mov     edi, [esp + 12]             ; edi <- Destination
    mov     edx, [esp + 20]             ; edx <- Count
    lea     eax, [esi + edx - 1]        ; eax <- End of Source
    cmp     esi, edi
    je      @CopyMemDone
    cmp     edx, 0
    je      @CopyMemDone
    cmp     esi, edi
    jae     @F
    cmp     eax, edi                    ; Overlapped?
    jae     @CopyBackward               ; Copy backward if overlapped
@@:
    mov     ecx, edx
    and     edx, 7
    shr     ecx, 3                      ; ecx <- # of Qwords to copy
    jz      @CopyBytes
    push    eax
    push    eax
    movq    [esp], mm0                  ; save mm0
@@:
    movq    mm0, [esi]
    movq    [edi], mm0
    add     esi, 8
    add     edi, 8
    loop    @B
    movq    mm0, [esp]                  ; restore mm0
    pop     ecx                         ; stack cleanup
    pop     ecx                         ; stack cleanup
    jmp     @CopyBytes
@CopyBackward:
    mov     esi, eax                    ; esi <- Last byte in Source
    lea     edi, [edi + edx - 1]        ; edi <- Last byte in Destination
    std
@CopyBytes:
    mov     ecx, edx
    rep     movsb
    cld
@CopyMemDone:    
    mov     eax, [esp + 12]
    ret
memcpy  ENDP

    END

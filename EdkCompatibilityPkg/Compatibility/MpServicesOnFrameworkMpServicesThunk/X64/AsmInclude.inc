;------------------------------------------------------------------------------
; Include file for X64 MpFuncs.asm
;
; Copyright (c) 2009 - 2010, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

VacantFlag             Equ   00h
NotVacantFlag          Equ   0ffh

LockLocation                  equ        RendezvousFunnelProcEnd - RendezvousFunnelProcStart
StackStartAddressLocation     equ        LockLocation + 08h
StackSizeLocation             equ        LockLocation + 10h
CProcedureLocation            equ        LockLocation + 18h
GdtrLocation                  equ        LockLocation + 20h
IdtrLocation                  equ        LockLocation + 2Ah
BufferStartLocation           equ        LockLocation + 34h
Cr3OffsetLocation             equ        LockLocation + 38h
ProcessorNumberLocation       equ        LockLocation + 3Ch

;-------------------------------------------------------------------------------

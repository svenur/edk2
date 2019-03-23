;------------------------------------------------------------------------------
; Include file for IA32 MpFuncs.asm
;
; Copyright (c) 2009 - 2010, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

VacantFlag             Equ   00h
NotVacantFlag          Equ   0ffh

LockLocation        equ        RendezvousFunnelProcEnd - RendezvousFunnelProcStart
StackStart          equ        LockLocation + 4h
StackSize           equ        LockLocation + 8h
RendezvousProc      equ        LockLocation + 0Ch
GdtrProfile         equ        LockLocation + 10h
IdtrProfile         equ        LockLocation + 16h
BufferStart         equ        LockLocation + 1Ch
ProcessorNumber     equ        LockLocation + 20h
;-------------------------------------------------------------------------------

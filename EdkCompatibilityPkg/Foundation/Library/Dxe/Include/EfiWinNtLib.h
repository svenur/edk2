/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  EfiWinNtLib.h

Abstract:

  Set up gWinNt pointer so we can call WinNT APIs.

--*/

#ifndef _EFI_WIN_NT_LIB_H_
#define _EFI_WIN_NT_LIB_H_

extern EFI_WIN_NT_THUNK_PROTOCOL  *gWinNt;

EFI_STATUS
EfiInitializeWinNtDriverLib (
  IN EFI_HANDLE           ImageHandle,
  IN EFI_SYSTEM_TABLE     *SystemTable
  )
/*++

Routine Description:

  Intialize gWinNt and initialize debug console. 

Arguments:

  ImageHandle     - The firmware allocated handle for the EFI image.
  
  SystemTable     - A pointer to the EFI System Table.

Returns: 

  Status code

--*/
;

//
// NTDebugConsole Prototypes
//
VOID
NtDebugConsoleInit (
  VOID
  )
/*++

Routine Description:

  Nt debug console initialize.

Arguments:

  None

Returns:

  None

--*/
;

#endif

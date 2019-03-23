/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  WinNtThunk.c

Abstract:

  This protocol allows an EFI driver (DLL) in the NT emulation envirnment
  to make Win32 API calls.

--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (WinNtThunk)

EFI_GUID  gEfiWinNtThunkProtocolGuid = EFI_WIN_NT_THUNK_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiWinNtThunkProtocolGuid, "EFI Win NT Thunk", "Win32 API thunk protocol");

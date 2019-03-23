/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  EfiWinNt.h

Abstract:

  EFI master include file for WinNt components.

--*/

#ifndef _EFI_WIN_NT_H_

#ifdef EFI_NT_EMULATOR

#define _EFI_WIN_NT_H_

#pragma warning(disable : 4115)
#pragma warning(disable : 4201)
#pragma warning(disable : 4214)

#include "windows.h"
#include "stdio.h"

//
// Set the warnings back on so the EFI code must be /W4.
//
#pragma warning(default : 4115)
#pragma warning(default : 4201)
#pragma warning(default : 4214)

#endif

#include "Tiano.h"

#endif

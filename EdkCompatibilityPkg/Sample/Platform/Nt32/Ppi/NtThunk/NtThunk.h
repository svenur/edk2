/*++

Copyright (c) 2004 - 2008, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  NtThunk.h

Abstract:

  WinNt Thunk interface PPI

--*/

#ifndef _NT_PEI_WIN_NT_THUNK_H_
#define _NT_PEI_WIN_NT_THUNK_H_

#include "Tiano.h"
#include "PeiHob.h"

#define PEI_NT_THUNK_GUID \
  { \
    0x98c281e5, 0xf906, 0x43dd, {0xa9, 0x2b, 0xb0, 0x3, 0xbf, 0x27, 0x65, 0xda} \
  }

typedef
EFI_STATUS
(EFIAPI *PEI_NT_THUNK_INTERFACE) (
  IN OUT UINT64                *InterfaceSize,
  IN OUT EFI_PHYSICAL_ADDRESS  * InterfaceBase
  );

/*++

Routine Description:
  Export of EFI_WIN_NT_THUNK_PROTOCOL from the Windows SEC.

Arguments:
  InterfaceSize - sizeof (EFI_WIN_NT_THUNK_PROTOCOL);
  InterfaceBase - Address of the EFI_WIN_NT_THUNK_PROTOCOL

Returns:
  EFI_SUCCESS - Data returned

--*/
typedef struct {
  PEI_NT_THUNK_INTERFACE  NtThunk;
} PEI_NT_THUNK_PPI;

extern EFI_GUID gPeiNtThunkPpiGuid;

#endif

/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

 NtThunk.c

Abstract:

  Abstraction for the NT Thunk PPI

--*/

#include "Tiano.h"
#include "PeiBind.h"
#include "PeiApi.h"
#include EFI_PPI_DEFINITION (NtThunk)

EFI_GUID  gPeiNtThunkPpiGuid = PEI_NT_THUNK_GUID;

EFI_GUID_STRING(&gPeiNtThunkPpiGuid, "NtThunk", "NT PEI WINNT THUNK PPI");

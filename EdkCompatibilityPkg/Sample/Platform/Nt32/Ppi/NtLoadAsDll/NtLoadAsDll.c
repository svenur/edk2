/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    NtLoadAsDll.c

Abstract:

  DXE Initial Program Load PPI GUID as defined in Tiano

--*/

#include "Tiano.h"
#include "Pei.h"
#include EFI_PPI_DEFINITION (NtLoadAsDll)

EFI_GUID  gEfiNtLoadAsDllPpiGuid = EFI_NT_LOAD_AS_DLL_PPI_GUID;

EFI_GUID_STRING(&gEfiNtLoadAsDllPpiGuid, "NtLoadAsDll", "NT LOAD AS DLL PPI");

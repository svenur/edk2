/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

 NtPeiLoadFile.c

Abstract:

  Abstraction for the NT Load Image PPI GUID as defined in Tiano

--*/

#include "Tiano.h"
#include "PeiBind.h"
#include "PeiApi.h"
#include EFI_PPI_DEFINITION (NtPeiLoadFile)

EFI_GUID  gNtPeiLoadFileGuid = NT_PEI_LOAD_FILE_GUID;

EFI_GUID_STRING(&gNtPeiLoadFileGuid, "NtPeiLoadFile", "NT PEI LOAD FILE PPI");

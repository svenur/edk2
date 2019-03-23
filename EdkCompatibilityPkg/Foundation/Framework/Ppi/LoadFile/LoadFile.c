/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  LoadFile.c

Abstract:

  Load File PPI GUID.

--*/

#include "Tiano.h"
#include "PeiBind.h"
#include "PeiApi.h"
#include EFI_PPI_DEFINITION (LoadFile)

EFI_GUID  gPeiFvFileLoaderPpiGuid = EFI_PEI_FV_FILE_LOADER_GUID;

EFI_GUID_STRING(&gPeiFvFileLoaderPpiGuid, "FvFileLoader", "Fv File Loader Support PPI");

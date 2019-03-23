/*++

Copyright (c) 2009 - 2010, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

 LoadedImage.c

Abstract:

  The file describes the PPI which notifies other drivers 
  of the PEIM being initialized by the PEI Dispatcher.

--*/

#include "Tiano.h"
#include "PeiBind.h"
#include "PeiApi.h"
#include EFI_PPI_DEFINITION (LoadedImage)

EFI_GUID  gEfiPeiLoadedImagePpiGuid = EFI_PEI_LOADED_IMAGE_PPI_GUID;

EFI_GUID_STRING(&gEfiPeiLoadedImagePpiGuid, "LoadedImagePpi", "LoadedImage PPI");

/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    PeiPeCoffLoader.c
    
Abstract:

  GUID for the PE/COFF Loader APIs shared between PEI and DXE

--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION(PeiPeCoffLoader)

EFI_GUID gEfiPeiPeCoffLoaderGuid  = EFI_PEI_PE_COFF_LOADER_GUID;

EFI_GUID_STRING(&gEfiPeiPeCoffLoaderGuid, "PE/COFF Loader", "PE/COFF Loader APIs from PEI");


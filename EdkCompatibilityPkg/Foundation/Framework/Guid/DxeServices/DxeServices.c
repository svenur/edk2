/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  DxeServices.c
    
Abstract:

  GUID used for the DXE Services Table

--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION (DxeServices)

EFI_GUID  gEfiDxeServicesTableGuid = EFI_DXE_SERVICES_TABLE_GUID;

EFI_GUID_STRING(&gEfiDxeServicesTableGuid, "DXE Services Table", "DXE Services Table GUID in EFI System Table");

/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  SystemNvDataGuid.c
    
Abstract:

  GUIDs used for System Non Volatile HOB entries in the in the HOB list and FV Guids carrying
  the System specific information.

--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION(SystemNvDataGuid)


EFI_GUID gEfiSystemNvDataHobGuid  = EFI_SYSTEM_NV_DATA_HOB_GUID;
EFI_GUID gEfiSystemNvDataFvGuid  = EFI_SYSTEM_NV_DATA_FV_GUID;

EFI_GUID_STRING(&gEfiSystemNvDataHobGuid, "SYSTEM NV DATA HOB", "SYSTEM NV DATA HOB GUID for HOB list.");
EFI_GUID_STRING(&gEfiSystemNvDataFvGuid, "SYSTEM NV DATA FV", "SYSTEM NV DATA FV GUID");


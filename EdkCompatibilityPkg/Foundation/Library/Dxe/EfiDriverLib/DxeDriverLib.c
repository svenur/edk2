/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  DxeDriverLib.c

Abstract:

  Light weight lib to support EFI drivers.

--*/

#include "Tiano.h"
#include "EfiDriverLib.h"

EFI_STATUS
DxeInitializeDriverLib (
  IN EFI_HANDLE           ImageHandle,
  IN EFI_SYSTEM_TABLE     *SystemTable
  )
/*++

Routine Description:

  Intialize Driver Lib if it has not yet been initialized. 

Arguments:

  ImageHandle     - Standard EFI Image entry parameter
  
  SystemTable     - Standard EFI Image entry parameter

Returns: 

  EFI_STATUS always returns EFI_SUCCESS

--*/
{
  EFI_STATUS  Status;

  Status = EfiInitializeDriverLib (ImageHandle, SystemTable);
  if (!EFI_ERROR (Status)) {
    Status = EfiLibGetSystemConfigurationTable (&gEfiDxeServicesTableGuid, (VOID **) &gDS);
  }

  return Status;
}

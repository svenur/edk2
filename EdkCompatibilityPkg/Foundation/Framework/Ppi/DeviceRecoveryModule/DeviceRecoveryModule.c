/*++

Copyright (c) 1999 - 2002, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  DeviceRecoveryModule.c

Abstract:

  Device Recovery Module PPI GUID as defined in PEI EAS

--*/

#include "Tiano.h"
#include "PeiBind.h"
#include "PeiApi.h"
#include EFI_PPI_DEFINITION (DeviceRecoveryModule)

EFI_GUID  gPeiDeviceRecoveryModulePpiGuid = PEI_DEVICE_RECOVERY_MODULE_INTERFACE_PPI;

EFI_GUID_STRING(&gPeiDeviceRecoveryModulePpiGuid, "DeviceRecoveryModule", "Device Recovery Module PPI");

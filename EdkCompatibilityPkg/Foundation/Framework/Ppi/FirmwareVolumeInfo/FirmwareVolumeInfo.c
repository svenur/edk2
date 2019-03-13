/*++

Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  FirmwareVolumeInfo.c

Abstract:

  PI 1.0 spec definition.

--*/


#include "Tiano.h"
#include "Pei.h"
#include EFI_PPI_DEFINITION (FirmwareVolumeInfo)

EFI_GUID gEfiFirmwareVolumeInfoPpiGuid = EFI_PEI_FIRMWARE_VOLUME_INFO_PPI_GUID;
EFI_GUID_STRING(&gEfiFirmwareVolumeInfoPpiGuid, "FirmwareVolumeInfo", "FirmwareVolumeInfo PPI");

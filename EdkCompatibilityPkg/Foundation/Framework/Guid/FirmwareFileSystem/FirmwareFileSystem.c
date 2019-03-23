/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  FirmwareFileSystem.c
    
Abstract:

  Tiano Guid used to define the Firmware File System.  See the EFI Firmware 
  File System Specification for more details.

--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION (FirmwareFileSystem)

EFI_GUID  gEfiFirmwareFileSystemGuid    = EFI_FIRMWARE_FILE_SYSTEM_GUID;
EFI_GUID  gEfiFirmwareVolumeTopFileGuid = EFI_FFS_VOLUME_TOP_FILE_GUID;

EFI_GUID_STRING(&gEfiFirmwareFileSystemGuid, "Firmware File System GUID", "EFI Firmware File System GUID");
EFI_GUID_STRING(&gEfiFirmwareVolumeTopFileGuid, "Firmware Volume Top File GUID", "EFI FFS Volume Top File GUID");

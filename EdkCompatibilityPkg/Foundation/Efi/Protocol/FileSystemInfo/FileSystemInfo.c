/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  FileSystemInfo.c

Abstract:

  FileSystemInfo protocol as defined in the EFI 1.0 specification.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (FileSystemInfo)

EFI_GUID  gEfiFileSystemInfoGuid = EFI_FILE_SYSTEM_INFO_ID_GUID;

EFI_GUID_STRING(&gEfiFileSystemInfoGuid, "File System Info ID", "EFI File System Info ID GUID");

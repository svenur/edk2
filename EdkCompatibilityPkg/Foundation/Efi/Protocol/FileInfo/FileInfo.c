/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  FileInfo.c

Abstract:

  FileInfo protocol as defined in the EFI 1.0 specification.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (FileInfo)

EFI_GUID  gEfiFileInfoGuid = EFI_FILE_INFO_ID;

EFI_GUID_STRING(&gEfiFileInfoGuid, "File System Info", "EFI File System Info GUID");

/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  SimpleFileSystem.c

Abstract:

  SimpleFileSystem protocol as defined in the EFI 1.0 specification.

  The SimpleFileSystem protocol is the programatic access to the FAT (12,16,32) 
  file system specified in EFI 1.0. It can also be used to abstract any 
  file system other than FAT.

  EFI 1.0 can boot from any valid EFI image contained in a SimpleFileSystem
 
--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (SimpleFileSystem)

EFI_GUID  gEfiSimpleFileSystemProtocolGuid = EFI_SIMPLE_FILE_SYSTEM_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiSimpleFileSystemProtocolGuid, "Filesystem Protocol", "EFI 1.0 Simple FileSystem Protocol");

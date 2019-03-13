/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    DiskIo.c

Abstract:

  Disk IO protocol as defined in the EFI 1.0 specification.

  The Disk IO protocol is used to convert block oriented devices into byte
  oriented devices. The Disk IO protocol is intended to layer on top of the
  Block IO protocol.
 
--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (DiskIo)

EFI_GUID  gEfiDiskIoProtocolGuid = EFI_DISK_IO_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiDiskIoProtocolGuid, "DiskIo Protocol", "EFI 1.0 Disk IO Protocol");

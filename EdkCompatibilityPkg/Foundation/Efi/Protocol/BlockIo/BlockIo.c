/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  BlockIo.c

Abstract:

  Block IO protocol as defined in the EFI 1.0 specification.

  The Block IO protocol is used to abstract block devices like hard drives,
  DVD-ROMs and floppy drives.

 
--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (BlockIo)

EFI_GUID  gEfiBlockIoProtocolGuid = EFI_BLOCK_IO_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiBlockIoProtocolGuid, "BlockIo Protocol", "EFI 1.0 Block IO protocol");

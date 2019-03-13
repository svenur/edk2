/*++

Copyright (c) 2008, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  LoadFile2.c

Abstract:

  Load File2 protocol as defined in the UEFI specification.

  Load File2 protocol exists to support to obtain files from arbitrary devices
  but are not used as boot options.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (LoadFile2)

EFI_GUID  gEfiLoadFile2ProtocolGuid = EFI_LOAD_FILE2_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiLoad2FileProtocolGuid, "LoadFile2 Protocol", "UEFI 2.1 Load File2 Protocol");

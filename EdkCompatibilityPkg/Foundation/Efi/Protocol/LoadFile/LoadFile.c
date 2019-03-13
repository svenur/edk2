/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  LoadFile.c

Abstract:

  Load File protocol as defined in the EFI 1.0 specification.

  Load file protocol exists to supports the addition of new boot devices, 
  and to support booting from devices that do not map well to file system. 
  Network boot is done via a LoadFile protocol.

  EFI 1.0 can boot from any device that produces a LoadFile protocol.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (LoadFile)

EFI_GUID  gEfiLoadFileProtocolGuid = LOAD_FILE_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiLoadFileProtocolGuid, "LoadFile Protocol", "EFI 1.0 Load File Protocol");

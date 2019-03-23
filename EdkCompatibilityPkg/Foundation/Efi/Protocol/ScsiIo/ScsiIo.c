/*++
  Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

    ScsiIo.c
    
Abstract: 
  EFI_SCSI_IO_PROTOCOL as defined in UEFI 2.0.

Revision History

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (ScsiIo)

EFI_GUID gEfiScsiIoProtocolGuid = EFI_SCSI_IO_PROTOCOL_GUID;
EFI_GUID_STRING(&gEfiScsiIoProtocolGuid, "SCSI IO protoco", "UEFI 2.0 SCSI IO protocol");

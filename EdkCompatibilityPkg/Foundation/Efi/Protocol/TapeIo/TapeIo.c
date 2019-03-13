/*++
  Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

    TapeIo.c
    
Abstract: 
  EFI_TAPE_IO_PROTOCOL as defined in the UEFI 2.0.
  Provide services to control and access a tape device.

Revision History

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (TapeIo)

EFI_GUID gEfiTapeIoProtocolGuid = EFI_TAPE_IO_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiTapeIoProtocolGuid, "Tape IO protoco", "UEFI 2.0 Tape IO protocol");

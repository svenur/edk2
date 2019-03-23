/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  ScsiPassThru.c

Abstract:

  SCSI Pass Through protocol.
   
--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (ScsiPassThru)

EFI_GUID  gEfiScsiPassThruProtocolGuid = EFI_SCSI_PASS_THRU_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiScsiPassThruProtocolGuid, "SCSI Pass Through Protocol", "EFI 1.0 SCSI Pass Through protocol");

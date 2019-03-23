/*++

  Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent
  
Module Name:

    ScsiPassThruExt.c

Abstract:
  EFI_EXT_SCSI_PASS_THRU_PROTOCOL as defined in UEFI 2.0.

Revision History

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (ScsiPassThruExt)

EFI_GUID  gEfiExtScsiPassThruProtocolGuid = EFI_EXT_SCSI_PASS_THRU_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiExtScsiPassThruProtocolGuid, "Extended Scsi Pass Thru", "UEFI 2.0 Extended SCSI Pass Thru protocol");

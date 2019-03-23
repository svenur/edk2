/*++
  Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

    IScsiInitatorName.c
    
Abstract: 
  EFI_ISCSI_INITIATOR_NAME_PROTOCOL as defined in UEFI 2.0.
  It rovides the ability to get and set the iSCSI Initiator Name.                                                  

Revision History

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (IScsiInitiatorName)

EFI_GUID gEfiIScsiInitiatorNameProtocolGuid = EFI_ISCSI_INITIATOR_NAME_PROTOCOL_GUID;
EFI_GUID_STRING(&gEfiIScsiInitiatorNameProtocolGuid, "ISCSI Initiator Name Protocol", "UEFI 2.0 ISCSI Initiator Name Protocol");

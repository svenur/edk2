/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  DataHub.c

Abstract:

  The logging hub protocol is used both by agents wishing to log
  errors and those wishing to be made aware of all information that
  has been logged.

  For more information please look at Intel Platform Innovation 
  Framework for EFI Data Hub Specification.

--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (DataHub)

EFI_GUID  gEfiDataHubProtocolGuid = EFI_DATA_HUB_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiDataHubProtocolGuid, "DataHub Protocol", "EFI Data Hub Protocol");

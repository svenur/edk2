/*++

Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  HiiConfigRouting.c

Abstract:

  EFI_HII_CONFIG_ROUTING_PROTOCOL as defined in UEFI 2.1 spec.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (HiiConfigRouting)

EFI_GUID  gEfiHiiConfigRoutingProtocolGuid = EFI_HII_CONFIG_ROUTING_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiHiiConfigRoutingProtocolGuid, "HII Config Routing Protocol", "HII Config Routing 2.1 protocol");

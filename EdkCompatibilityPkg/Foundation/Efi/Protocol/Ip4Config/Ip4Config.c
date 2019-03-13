/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Ip4Config.c

Abstract:

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (Ip4Config)

EFI_GUID gEfiIp4ConfigProtocolGuid  = EFI_IP4_CONFIG_PROTOCOL_GUID;

EFI_GUID_STRING (
  &gEfiIp4ConfigProtocolGuid, 
  "Ip4Config Protocol",                 
  "Ip4Config Protocol"
  );

/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  NicIp4Config.c

Abstract:

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (NicIp4Config)

EFI_GUID gEfiNicIp4ConfigProtocolGuid = EFI_NIC_IP4_CONFIG_PROTOCOL_GUID;

EFI_GUID_STRING (
  &gEfiNicIp4ConfigProtocolGuid, 
  "NicIP4Config Protocol",  
  "NicIP4Config Protocol"
  );

EFI_GUID gEfiNicIp4ConfigVariableGuid  = EFI_NIC_IP4_CONFIG_VARIABLE_GUID;

EFI_GUID_STRING(
  &gEfiNicIp4ConfigVariableGuid, 
  "Ip4 Static Config", 
  "Ip4 Configuration Data"
  );

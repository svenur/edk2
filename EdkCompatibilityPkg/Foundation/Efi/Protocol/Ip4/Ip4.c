/*++

Copyright (c) 2005 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  Ip4.c

Abstract:

  UEFI IPv4 protocol.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (Ip4)

EFI_GUID gEfiIp4ServiceBindingProtocolGuid 
           = EFI_IP4_SERVICE_BINDING_PROTOCOL_GUID;

EFI_GUID gEfiIp4ProtocolGuid = EFI_IP4_PROTOCOL_GUID;

EFI_GUID_STRING (
  &gEfiIp4ServiceBindingProtocolGuid, 
  "IP4 Service Binding Protocol", 
  "IP4 Service Binding Protocol"
  );

EFI_GUID_STRING (
  &gEfiIp4ProtocolGuid,               
  "IP4 Protocol",                 
  "IP4 Protocol"
  );

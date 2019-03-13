/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Dhcp4.c

Abstract:

  UEFI Dynamic Host Configuration Protocol 4.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (Dhcp4)

EFI_GUID gEfiDhcp4ServiceBindingProtocolGuid 
           = EFI_DHCP4_SERVICE_BINDING_PROTOCOL_GUID;

EFI_GUID gEfiDhcp4ProtocolGuid             
           = EFI_DHCP4_PROTOCOL_GUID;

EFI_GUID_STRING (
  &gEfiDhcp4ServiceBindingProtocolGuid, 
  "DHCP4 Service Binding Protocol", 
  "DHCP4 Service Binding Protocol"
  );

EFI_GUID_STRING (
  &gEfiDhcp4ProtocolGuid,             
  "DHCP4 Protocol",             
  "DHCP4 Protocol"
  );

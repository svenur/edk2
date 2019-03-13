/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Arp.c

Abstract:

  UEFI Arp protocol.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (Arp)

EFI_GUID gEfiArpServiceBindingProtocolGuid  = EFI_ARP_SERVICE_BINDING_PROTOCOL_GUID;
EFI_GUID gEfiArpProtocolGuid                = EFI_ARP_PROTOCOL_GUID;

EFI_GUID_STRING (&gEfiArpServiceBindingProtocolGuid, "ARP Service Binding Protocol", "ARP Service Binding Protocol");
EFI_GUID_STRING (&gEfiArpProtocolGuid,               "ARP Protocol",                 "ARP Protocol");

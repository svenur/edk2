/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  EfiNetworkInterfaceIdentifier.c

Abstract:


Revision History

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (EfiNetworkInterfaceIdentifier)

EFI_GUID  gEfiNetworkInterfaceIdentifierProtocolGuid = EFI_NETWORK_INTERFACE_IDENTIFIER_PROTOCOL_GUID;

EFI_GUID_STRING
  (
    &gEfiNetworkInterfaceIdentifierProtocolGuid, "Network Interface Identifier Protocol",
      "EFI Network Interface Identifier Protocol"
  );

EFI_GUID  gEfiNetworkInterfaceIdentifierProtocolGuid_31 = EFI_NETWORK_INTERFACE_IDENTIFIER_PROTOCOL_GUID_31;

EFI_GUID_STRING
  (
    &gEfiNetworkInterfaceIdentifierProtocolGuid_31, "Network Interface Identifier Protocol_31",
      "EFI1.1 Network Interface Identifier Protocol"
  );

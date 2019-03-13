/*++

Copyright (c) 2005 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  ManagedNetwork.c

Abstract:

  UEFI Managed Network protocol.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (ManagedNetwork)

EFI_GUID gEfiManagedNetworkServiceBindingProtocolGuid = EFI_MANAGED_NETWORK_SERVICE_BINDING_PROTOCOL_GUID;
EFI_GUID gEfiManagedNetworkProtocolGuid               = EFI_MANAGED_NETWORK_PROTOCOL_GUID;

EFI_GUID_STRING (&gEfiManagedNetworkServiceBindingProtocolGuid, "Managed Network Service Binding Protocol", "Managed Network Service Binding Protocol");
EFI_GUID_STRING (&gEfiManagedNetworkProtocolGuid, "Managed Network Protocol", "Managed Network Protocol");

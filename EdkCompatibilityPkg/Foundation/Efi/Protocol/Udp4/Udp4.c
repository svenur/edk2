/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Udp4.c

Abstract:

  UEFI UDPv4 protocol.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (Udp4)

EFI_GUID gEfiUdp4ServiceBindingProtocolGuid = EFI_UDP4_SERVICE_BINDING_PROTOCOL_GUID;
EFI_GUID gEfiUdp4ProtocolGuid               = EFI_UDP4_PROTOCOL_GUID;

EFI_GUID_STRING (&gEfiUdp4ServiceBindingProtocolGuid, "UDP4 Service Binding Protocol", "UDP4 Service Binding Protocol");
EFI_GUID_STRING (&gEfiUdp4ProtocolGuid, "UDP4 Protocol", "UDP4 Protocol");

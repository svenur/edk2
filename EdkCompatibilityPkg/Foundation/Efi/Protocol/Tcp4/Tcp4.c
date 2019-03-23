/*++

Copyright (c) 2005 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Tcp4.c

Abstract:

  UEFI TCPv4 Protocol

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (Tcp4)

EFI_GUID  gEfiTcp4ServiceBindingProtocolGuid = EFI_TCP4_SERVICE_BINDING_PROTOCOL_GUID;
EFI_GUID  gEfiTcp4ProtocolGuid               = EFI_TCP4_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiTcp4ServiceBindingProtocolGuid, "TCP4 Service Binding Protocol", "TCP4 Service Binding Protocol");
EFI_GUID_STRING(&gEfiTcp4ProtocolGuid, "TCP4 Protocol", "TCP4 Protocol");


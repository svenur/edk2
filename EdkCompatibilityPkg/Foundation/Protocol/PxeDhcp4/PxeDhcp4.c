/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  PxeDhcp4.c

Abstract:
  PxeDhcp4 GUID declaration

--*/

#include "Tiano.h"

#include EFI_PROTOCOL_DEFINITION (PxeDhcp4)

EFI_GUID  gEfiPxeDhcp4ProtocolGuid = EFI_PXE_DHCP4_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiPxeDhcp4ProtocolGuid, "PXE DHCP4 Protocol", "PXE DHCPv4 Protocol");

/* EOF - PxeDhcp4.c */

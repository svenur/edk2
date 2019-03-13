/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  PxeDhcp4Callback.c

Abstract:
  PxeDhcp4Callback protocol GUID definition.

--*/

#include "Tiano.h"

#include EFI_PROTOCOL_DEFINITION (PxeDhcp4CallBack)

EFI_GUID  gEfiPxeDhcp4CallbackProtocolGuid = EFI_PXE_DHCP4_CALLBACK_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiPxeDhcp4CallbackProtocolGuid, "PXE DHCP4 Callback Protocol", "PXE DHCP IPv4 Callback Protocol");

/* EOF - PxeDhcp4Callback.c */

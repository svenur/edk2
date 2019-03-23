/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  PxeBaseCodeCallBack.c

Abstract:
  PXE BaseCode Callback GUID declaration.

--*/

#include "EfiSpec.h"

#include EFI_PROTOCOL_DEFINITION (PxeBaseCodeCallBack)

EFI_GUID  gEfiPxeBaseCodeCallbackProtocolGuid = EFI_PXE_BASE_CODE_CALLBACK_PROTOCOL_GUID;

EFI_GUID_STRING
  (&gEfiPxeBaseCodeCallbackProtocolGuid, "PXE Base Code Callback Protocol", "EFI PXE Base Code Callback Protocol");

/* EOF - PxeBaseCodeCallBack.c */

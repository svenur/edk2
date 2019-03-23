/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Bis.c

Abstract:

  This file defines the Bis protocol

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (Bis)

EFI_GUID  gEfiBisProtocolGuid = EFI_BIS_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiBisProtocolGuid, "BIS Base Protocol", "BIS Base protocol");

/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Hii.c

Abstract:

  This file defines the Human Interface Infrastructure protocol which will 
  be used by resources which want to publish IFR/Font/String data and have it 
  collected by the Configuration engine.

 
--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (Hii)

EFI_GUID  gEfiHiiProtocolGuid = EFI_HII_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiHiiProtocolGuid, "Human Interface Infrastructure Protocol", "HII 1.0 protocol");

/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    UgaSplash.c

Abstract:

  UGA Splash protocol.

  Abstraction of a very simple graphics device splash screen.

--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (UgaSplash)

EFI_GUID  gEfiUgaSplashProtocolGuid = EFI_UGA_SPLASH_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiUgaSplashProtocolGuid, "UGA Splash Protocol", "UGA Splash Protocol");

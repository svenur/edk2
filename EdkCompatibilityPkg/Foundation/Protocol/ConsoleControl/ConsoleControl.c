/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  ConsoleControl.c

Abstract:

  Abstraction of a Text mode or GOP/UGA screen

--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (ConsoleControl)


EFI_GUID gEfiConsoleControlProtocolGuid = EFI_CONSOLE_CONTROL_PROTOCOL_GUID;

EFI_GUID_STRING (&gEfiConsoleControlProtocolGuid, "Console Control Protocol", "Console Control Protocol");


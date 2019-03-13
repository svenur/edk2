/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Metronome.c

Abstract:

  Metronome Architectural Protocol as defined in Tiano

--*/

#include "Tiano.h"
#include EFI_ARCH_PROTOCOL_DEFINITION (Metronome)

EFI_GUID  gEfiMetronomeArchProtocolGuid = EFI_METRONOME_ARCH_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiMetronomeArchProtocolGuid, "Metronome", "Metronome Arch Protocol");

/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
  EfiLegacyBios.c
    
--*/
#include "Tiano.h"

#include EFI_GUID_DEFINITION (EventLegacyBios)

EFI_GUID gEfiEventLegacyBootGuid = EFI_EVENT_LEGACY_BOOT_GUID;

EFI_GUID_STRING (&gEfiEventLegacyBootGuid, "EventLegacyBoot", "Event Legacy Boot GUID")

/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  PciOptionRomTable.c
    
Abstract:

  GUID and data structure used to describe the list of PCI Option ROMs present in a system.

--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION(PciOptionRomTable)

EFI_GUID gEfiPciOptionRomTableGuid = EFI_PCI_OPTION_ROM_TABLE_GUID;

EFI_GUID_STRING(&gEfiPciOptionRomTableGuid, "PCI Option ROM Table", "PCI Option ROM Table GUID in EFI System Table");

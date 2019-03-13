/*++

Copyright (c) 2008 - 2010, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  HiiPackageList.c

Abstract:

  EFI_HII_PACKAGE_LIST_PROTOCOL as defined in UEFI 2.1 spec.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (HiiPackageList)

EFI_GUID  gEfiHiiPackageListProtocolGuid = EFI_HII_PACKAGE_LIST_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiHiiPackageListProtocolGuid, "HII Package List Protocol", "HII Package List 2.1 protocol");

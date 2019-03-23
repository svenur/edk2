/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Capsule.c
    
Abstract:

  EFI Capsule update Guid data declarations.

--*/

#include "Tiano.h"

#include EFI_GUID_DEFINITION(Capsule)

EFI_GUID gEfiCapsuleVendorGuid = EFI_CAPSULE_VENDOR_GUID;

EFI_GUID_STRING(&gEfiCapsuleVendorGuid, "EFI", "Efi Capsule GUID")


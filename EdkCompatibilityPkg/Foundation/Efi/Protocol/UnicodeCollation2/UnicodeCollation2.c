/*++

Copyright (c) 2008, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  UnicodeCollation2.c

Abstract:

  Unicode Collation2 protocol that follows the UEFI 2.0 specification.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (UnicodeCollation2)

EFI_GUID  gEfiUnicodeCollation2ProtocolGuid = EFI_UNICODE_COLLATION2_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiUnicodeCollation2ProtocolGuid, "Unicode Collation Protocol", "UEFI 2.0 Unicode Collation2 Protocol");

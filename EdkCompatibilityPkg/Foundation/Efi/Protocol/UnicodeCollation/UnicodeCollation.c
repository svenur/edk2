/*++

Copyright (c) 2004 - 2008, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  UnicodeCollation.c

Abstract:

  Unicode Collation protocol that follows the EFI 1.0 specification.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (UnicodeCollation)

EFI_GUID  gEfiUnicodeCollationProtocolGuid = EFI_UNICODE_COLLATION_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiUnicodeCollationProtocolGuid, "Unicode Collation Protocol", "EFI 1.0 Unicode Collation Protocol");

/*++

Copyright (c) 2008 - 2010, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  HiiPackageList.h

Abstract:

  EFI_HII_PACKAGE_LIST_PROTOCOL as defined in UEFI 2.1 spec.

--*/

#ifndef _HII_PACKAGE_LIST_H_
#define _HII_PACKAGE_LIST_H_

#include "EfiHii.h"

#define EFI_HII_PACKAGE_LIST_PROTOCOL_GUID \
  { \
    0x6a1ee763, 0xd47a, 0x43b4, {0xaa, 0xbe, 0xef, 0x1d, 0xe2, 0xab, 0x56, 0xfc} \
  }

typedef EFI_HII_PACKAGE_LIST_HEADER *    EFI_HII_PACKAGE_LIST_PROTOCOL;

extern EFI_GUID gEfiHiiPackageListProtocolGuid;

#endif

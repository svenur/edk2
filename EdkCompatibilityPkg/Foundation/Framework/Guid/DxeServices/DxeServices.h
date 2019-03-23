/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  DxeServices.h
    
Abstract:

  GUID used for the DXE Services Table

--*/

#ifndef _DXE_SERVICES_H_
#define _DXE_SERVICES_H_

#define EFI_DXE_SERVICES_TABLE_GUID \
  { \
    0x5ad34ba, 0x6f02, 0x4214, {0x95, 0x2e, 0x4d, 0xa0, 0x39, 0x8e, 0x2b, 0xb9} \
  }

extern EFI_GUID gEfiDxeServicesTableGuid;

#endif

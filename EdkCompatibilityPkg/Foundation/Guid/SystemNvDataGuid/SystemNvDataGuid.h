/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    SystemNvDataGuid.h
    
Abstract:

  GUIDs used for System Non Volatile HOB entries in the in the HOB list and FV Guids carrying
  the System specific information.

--*/

#ifndef _SYSTEM_NV_DATA_GUID_H_
#define _SYSTEM_NV_DATA_GUID_H_

#define EFI_SYSTEM_NV_DATA_FV_GUID \
  {0xfff12b8d, 0x7696, 0x4c8b, {0xa9, 0x85, 0x27, 0x47, 0x7, 0x5b, 0x4f, 0x50}}

#define EFI_SYSTEM_NV_DATA_HOB_GUID \
  {0xd6e5092d, 0xc7b2, 0x4872, {0xaf, 0x66, 0xfd, 0xc0, 0xe6, 0xf9, 0x5e, 0x78}}

typedef struct {
  EFI_GUID                  SystemNvDataHobGuid;
  EFI_GUID                  SystemNvDataFvGuid;
  EFI_LBA                   StartLba;    
  UINTN                     StartLbaOffset;
  EFI_LBA                   EndLba;    
  UINTN                     EndLbaOffset;
  UINT32                    DataTypeSignature;
} NV_SYSTEM_DATA_GUID_TYPE;

extern EFI_GUID gEfiSystemNvDataHobGuid;
extern EFI_GUID gEfiSystemNvDataFvGuid;

#endif

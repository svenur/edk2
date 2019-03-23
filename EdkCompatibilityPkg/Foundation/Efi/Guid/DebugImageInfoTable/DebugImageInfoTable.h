/*++

Copyright (c) 2004 - 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  DebugImageInfoTable.h
    
Abstract:

  GUID and related data structures used with the Debug Image Info Table.

--*/

#ifndef _DEBUG_IMAGE_INFO_GUID_H_
#define _DEBUG_IMAGE_INFO_GUID_H_

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (LoadedImage)

#define EFI_DEBUG_IMAGE_INFO_TABLE_GUID \
  { \
    0x49152e77, 0x1ada, 0x4764, {0xb7, 0xa2, 0x7a, 0xfe, 0xfe, 0xd9, 0x5e, 0x8b} \
  }

extern EFI_GUID gEfiDebugImageInfoTableGuid;

#define EFI_DEBUG_IMAGE_INFO_UPDATE_IN_PROGRESS 0x01
#define EFI_DEBUG_IMAGE_INFO_TABLE_MODIFIED     0x02
#define EFI_DEBUG_IMAGE_INFO_INITIAL_SIZE       (EFI_PAGE_SIZE / sizeof (UINTN))
#define EFI_DEBUG_IMAGE_INFO_TYPE_NORMAL        0x01

typedef struct {
  UINT64                Signature;
  EFI_PHYSICAL_ADDRESS  EfiSystemTableBase;
  UINT32                Crc32;
} EFI_SYSTEM_TABLE_POINTER;

typedef struct {
  UINT32                    ImageInfoType;
  EFI_LOADED_IMAGE_PROTOCOL *LoadedImageProtocolInstance;
  EFI_HANDLE                *ImageHandle;
} EFI_DEBUG_IMAGE_INFO_NORMAL;

typedef union {
  UINT32                      *ImageInfoType;
  EFI_DEBUG_IMAGE_INFO_NORMAL *NormalImage;
} EFI_DEBUG_IMAGE_INFO;

typedef struct {  
  volatile UINT32       UpdateStatus;
  UINT32                TableSize;
  EFI_DEBUG_IMAGE_INFO  *EfiDebugImageInfoTable;
} EFI_DEBUG_IMAGE_INFO_TABLE_HEADER;

#endif

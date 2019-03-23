/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  VirtualmemoryAccess.h

Abstract:

  
--*/

#ifndef _VIRTUAL_MEMORY_ACCESS_H_
#define _VIRTUAL_MEMORY_ACCESS_H_

#define EFI_VIRTUAL_MEMORY_ACCESS_PROTOCOL_GUID \
  {0x745d377a, 0xb988, 0x47b2, {0xb1, 0x8f, 0xbb, 0xc8, 0xd, 0xc5, 0x66, 0x98}}


EFI_FORWARD_DECLARATION (EFI_VIRTUAL_MEMORY_ACCESS_PROTOCOL);

typedef
EFI_STATUS
(EFIAPI *EFI_VIRTUAL_MEMORY_ACCESS_MAP) (
  IN EFI_VIRTUAL_MEMORY_ACCESS_PROTOCOL *This,
  IN  EFI_PHYSICAL_ADDRESS                        MappingAddress,
  IN  UINTN                                       NumberOfBytes,
  IN  EFI_PHYSICAL_ADDRESS                        MappedAddress
); 

typedef
EFI_STATUS
(EFIAPI *EFI_VIRTUAL_MEMORY_ACCESS_UNMAP) (
  IN EFI_VIRTUAL_MEMORY_ACCESS_PROTOCOL  *This,
  IN  EFI_PHYSICAL_ADDRESS                        MappedAddress,
  IN  UINTN                                       PageSizeInByte
);  

typedef
EFI_STATUS
(EFIAPI *EFI_VIRTUAL_MEMORY_ACCESS_GET_PAGE_SIZE) (
  IN EFI_VIRTUAL_MEMORY_ACCESS_PROTOCOL *This,
  IN  UINTN                                      *PageSizeInByte
);


struct _EFI_VIRTUAL_MEMORY_ACCESS_PROTOCOL {
  EFI_VIRTUAL_MEMORY_ACCESS_GET_PAGE_SIZE   GetPageSize;
  EFI_VIRTUAL_MEMORY_ACCESS_MAP             Map;
  EFI_VIRTUAL_MEMORY_ACCESS_UNMAP           UnMap;
};

extern EFI_GUID gEfiVirtualMemoryAccessProtocolGuid;

#endif


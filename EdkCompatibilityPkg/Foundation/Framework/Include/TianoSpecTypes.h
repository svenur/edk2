/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  TianoSpecTypes.h

Abstract:

  Tiano types defined in Tiano spec.

--*/

#ifndef _TIANO_SPEC_TYPES_H_
#define _TIANO_SPEC_TYPES_H_

//
// Modifier for EFI DXE Services
//
#define EFI_DXESERVICE

//
// Global Coherencey Domain types
//
typedef enum {
  EfiGcdMemoryTypeNonExistent,
  EfiGcdMemoryTypeReserved,
  EfiGcdMemoryTypeSystemMemory,
  EfiGcdMemoryTypeMemoryMappedIo,
  EfiGcdMemoryTypeMaximum
} EFI_GCD_MEMORY_TYPE;

typedef enum {
  EfiGcdIoTypeNonExistent,
  EfiGcdIoTypeReserved,
  EfiGcdIoTypeIo,
  EfiGcdIoTypeMaximum
} EFI_GCD_IO_TYPE;

typedef enum {
  EfiGcdAllocateAnySearchBottomUp,
  EfiGcdAllocateMaxAddressSearchBottomUp,
  EfiGcdAllocateAddress,
  EfiGcdAllocateAnySearchTopDown,
  EfiGcdAllocateMaxAddressSearchTopDown,
  EfiGcdMaxAllocateType
} EFI_GCD_ALLOCATE_TYPE;

typedef struct {
  EFI_PHYSICAL_ADDRESS  BaseAddress;
  UINT64                Length;
  UINT64                Capabilities;
  UINT64                Attributes;
  EFI_GCD_MEMORY_TYPE   GcdMemoryType;
  EFI_HANDLE            ImageHandle;
  EFI_HANDLE            DeviceHandle;
} EFI_GCD_MEMORY_SPACE_DESCRIPTOR;

typedef struct {
  EFI_PHYSICAL_ADDRESS  BaseAddress;
  UINT64                Length;
  EFI_GCD_IO_TYPE       GcdIoType;
  EFI_HANDLE            ImageHandle;
  EFI_HANDLE            DeviceHandle;
} EFI_GCD_IO_SPACE_DESCRIPTOR;

#endif

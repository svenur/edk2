/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  FirmwareFileSystem2.h

Abstract:

   PI 1.0 spec definition.

--*/

#ifndef __FIRMWARE_FILE_SYSTEM2_GUID_H__
#define __FIRMWARE_FILE_SYSTEM2_GUID_H__

//
// GUIDs defined by the FFS specification.
//
#define EFI_FIRMWARE_FILE_SYSTEM2_GUID \
  { 0x8c8ce578, 0x8a3d, 0x4f1c, { 0x99, 0x35, 0x89, 0x61, 0x85, 0xc3, 0x2d, 0xd3 } }

extern EFI_GUID gEfiFirmwareFileSystem2Guid;

#endif

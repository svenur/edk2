/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  FlashMapHob.h
    
Abstract:

  GUID used for Flash Map HOB entries in the HOB list.

--*/

#ifndef _FLASH_MAP_HOB_GUID_H_
#define _FLASH_MAP_HOB_GUID_H_

//
// Definitions for Flash Map
//
#define EFI_FLASH_MAP_HOB_GUID \
  { 0xb091e7d2, 0x5a0, 0x4198, {0x94, 0xf0, 0x74, 0xb7, 0xb8, 0xc5, 0x54, 0x59} }

extern EFI_GUID gEfiFlashMapHobGuid;

#endif // _FLASH_MAP_HOB_GUID_H_

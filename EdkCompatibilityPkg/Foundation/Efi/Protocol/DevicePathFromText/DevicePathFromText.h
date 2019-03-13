/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  DevicePathFromText.h

Abstract:

--*/

#ifndef _DEVICE_PATH_FROM_TEXT_PROTOCOL_H_
#define _DEVICE_PATH_FROM_TEXT_PROTOCOL_H_

//
// Device Path From Text protocol
//
#define EFI_DEVICE_PATH_FROM_TEXT_PROTOCOL_GUID \
  { \
    0x5c99a21, 0xc70f, 0x4ad2, {0x8a, 0x5f, 0x35, 0xdf, 0x33, 0x43, 0xf5, 0x1e} \
  }

typedef
EFI_DEVICE_PATH_PROTOCOL*
(EFIAPI *EFI_DEVICE_PATH_FROM_TEXT_NODE) (
  IN CONST CHAR16                 *TextDeviceNode
  )
/*++

  Routine Description:
    Convert text to the binary representation of a device node.

  Arguments:
    TextDeviceNode   -   TextDeviceNode points to the text representation of a device
                         node. Conversion starts with the first character and continues
                         until the first non-device node character.

  Returns:
    A pointer        -   Pointer to the EFI device node.
    NULL             -   if TextDeviceNode is NULL or there was insufficient memory.

--*/
;    

typedef
EFI_DEVICE_PATH_PROTOCOL*
(EFIAPI *EFI_DEVICE_PATH_FROM_TEXT_PATH) (
  IN CONST CHAR16                 *TextDevicePath
  )
/*++

  Routine Description:
    Convert text to the binary representation of a device path.

  Arguments:
    TextDevicePath   -   TextDevicePath points to the text representation of a device
                         path. Conversion starts with the first character and continues
                         until the first non-device node character.

  Returns:
    A pointer        -   Pointer to the allocated device path.
    NULL             -   if TextDeviceNode is NULL or there was insufficient memory.

--*/
;

typedef struct {
  EFI_DEVICE_PATH_FROM_TEXT_NODE  ConvertTextToDeviceNode;
  EFI_DEVICE_PATH_FROM_TEXT_PATH  ConvertTextToDevicePath;
} EFI_DEVICE_PATH_FROM_TEXT_PROTOCOL;

extern EFI_GUID gEfiDevicePathFromTextProtocolGuid;

#endif

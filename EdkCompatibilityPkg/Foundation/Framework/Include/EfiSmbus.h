/*++

Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  EfiSmbus.h

Abstract:

  

--*/

#ifndef _EFI_SMBUS_DEFINITION_H_
#define _EFI_SMBUS_DEFINITION_H_

//
// EFI Smbus Device Address, Smbus Device Command, Smbus Operation
//
typedef struct {
  UINTN SmbusDeviceAddress : 7;
} EFI_SMBUS_DEVICE_ADDRESS;

typedef UINTN EFI_SMBUS_DEVICE_COMMAND;

typedef enum _EFI_SMBUS_OPERATION
{
  EfiSmbusQuickRead,
  EfiSmbusQuickWrite,
  EfiSmbusReceiveByte,
  EfiSmbusSendByte,
  EfiSmbusReadByte,
  EfiSmbusWriteByte,
  EfiSmbusReadWord,
  EfiSmbusWriteWord,
  EfiSmbusReadBlock,
  EfiSmbusWriteBlock,
  EfiSmbusProcessCall,
  EfiSmbusBWBRProcessCall
} EFI_SMBUS_OPERATION;

typedef struct {
  UINT32  VendorSpecificId;
  UINT16  SubsystemDeviceId;
  UINT16  SubsystemVendorId;
  UINT16  Interface;
  UINT16  DeviceId;
  UINT16  VendorId;
  UINT8   VendorRevision;
  UINT8   DeviceCapabilities;
} EFI_SMBUS_UDID;


typedef struct {
  EFI_SMBUS_DEVICE_ADDRESS  SmbusDeviceAddress;
  EFI_SMBUS_UDID            SmbusDeviceUdid;
} EFI_SMBUS_DEVICE_MAP;



#endif

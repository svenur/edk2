/*++
	This GUID is used to define a vendor specific device path being owned by the 
	Framework specificaitons. 

	Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

	Module Name:	FrameworkDevicePath.h

	@par Revision Reference:
	Spec Version 0.9

--*/

#ifndef __FRAMEWORK_DEVICE_PATH_GUID_H__
#define __FRAMEWORK_DEVICE_PATH_GUID_H__

#define EFI_FRAMEWORK_DEVICE_PATH_GUID  \
  { 0xb7084e63, 0x46b7, 0x4d1a, { 0x86, 0x77, 0xe3, 0x0b, 0x53, 0xdb, 0xf0, 0x50 } }

extern EFI_GUID gEfiFrameworkDevicePathGuid;

#endif

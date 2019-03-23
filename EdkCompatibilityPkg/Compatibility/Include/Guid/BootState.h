/** @file
  GUID and Name are used to configure PcdBootState to DynamicHii PCD, which can
  make EDKII core work with the EDK implementation.

  The EDK implementation may depend on this guid variable to check the boot state.  
  However, the EDKII core uses a dynamic PcdBootState to save the boot state. To be compatible with EDK implementations, 
  BootStateGuid and BootStateName are used to configure PcdBootState to DynamicHii PCD to
  save the boot state as a variable.
  
Copyright (c) 2010, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

**/
#ifndef _BOOT_STATE_H_
#define _BOOT_STATE_H_

#define BOOT_STATE_VARIABLE_NAME  L"BootState"

#define  EFI_BOOT_STATE_VARIABLE_GUID  \
  { 0x60b5e939, 0xfcf, 0x4227, { 0xba, 0x83, 0x6b, 0xbe, 0xd4, 0x5b, 0xc0, 0xe3 } }

extern EFI_GUID gEfiBootStateGuid;

#endif

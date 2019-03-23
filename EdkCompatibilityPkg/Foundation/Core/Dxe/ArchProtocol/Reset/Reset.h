/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Reset.h

Abstract:

  Reset Architectural Protocol as defined in the DXE CIS

  Used to provide ResetSystem runtime services

  The ResetSystem () EFI 1.0 service is added to the EFI system table and the 
  EFI_RESET_ARCH_PROTOCOL_GUID protocol is registered with a NULL pointer.

  No CRC of the EFI system table is required, as it is done in the DXE core.

--*/

#ifndef _ARCH_PROTOCOL_RESET_H_
#define _ARCH_PROTOCOL_RESET_H_

//
// Global ID for the Reset Architectural Protocol
//
#define EFI_RESET_ARCH_PROTOCOL_GUID  \
  { 0x27CFAC88, 0x46CC, 0x11d4, {0x9A, 0x38, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D} }

extern EFI_GUID gEfiResetArchProtocolGuid;

#endif

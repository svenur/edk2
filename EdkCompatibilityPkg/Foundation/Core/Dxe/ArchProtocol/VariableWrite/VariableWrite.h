/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  VariableWrite.h

Abstract:

  Variable Write Architectural Protocol as defined in the DXE CIS

  This code is used to produce the EFI 1.0 runtime variable services

  The GetVariable (), GetNextVariableName (), and SetVariable () EFI 1.0 
  services are added to the EFI system table and the 
  EFI_VARIABLE_WRITE_ARCH_PROTOCOL_GUID protocol is registered with a NULL pointer.

  No CRC of the EFI system table is required, as it is done in the DXE core.

--*/

#ifndef _ARCH_PROTOCOL_VARIABLE_WRITE_ARCH_H_
#define _ARCH_PROTOCOL_VARIABLE_WRITE_ARCH_H_

//
// Global ID for the Variable Write Architectural Protocol
//
#define EFI_VARIABLE_WRITE_ARCH_PROTOCOL_GUID \
  { 0x6441f818, 0x6362, 0x4e44, {0xb5, 0x70, 0x7d, 0xba, 0x31, 0xdd, 0x24, 0x53} }

extern EFI_GUID gEfiVariableWriteArchProtocolGuid;

#endif 

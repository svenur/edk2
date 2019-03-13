/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    SmBios.h
    
Abstract:

  GUIDs used to locate the SMBIOS tables in the EFI 1.0 system table.

  This GUID in the system table is the only legal way to search for and 
  locate the SMBIOS tables. Do not search the 0xF0000 segment to find SMBIOS
  tables.

--*/

#ifndef _SMBIOS_GUID_H_
#define _SMBIOS_GUID_H_

#define EFI_SMBIOS_TABLE_GUID \
  { \
    0xeb9d2d31, 0x2d88, 0x11d3, {0x9a, 0x16, 0x0, 0x90, 0x27, 0x3f, 0xc1, 0x4d} \
  }

extern EFI_GUID gEfiSmbiosTableGuid;

//
// Smbios Table Entry Point Structure
//
#pragma pack(1)
typedef struct {
  UINT8   AnchorString[4];
  UINT8   EntryPointStructureChecksum;
  UINT8   EntryPointLength;
  UINT8   MajorVersion;
  UINT8   MinorVersion;
  UINT16  MaxStructureSize;
  UINT8   EntryPointRevision;
  UINT8   FormattedArea[5];
  UINT8   IntermediateAnchorString[5];
  UINT8   IntermediateChecksum;
  UINT16  TableLength;
  UINT32  TableAddress;
  UINT16  NumberOfSmbiosStructures;
  UINT8   SmbiosBcdRevision;
} SMBIOS_TABLE_ENTRY_POINT;
#pragma pack()
//
// The Smbios structure header
//
#pragma pack(1)
typedef struct {

  UINT8   Type;
  UINT8   Length;
  UINT16  Handle;

} SMBIOS_STRUCTURE;
#pragma pack()

#endif

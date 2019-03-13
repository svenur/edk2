/*++

Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  FirmwareVolumeInfo.h

Abstract:

  PI 1.0 spec definition.

--*/

#ifndef __FIRMWARE_VOLUME_INFO_PPI__
#define __FIRMWARE_VOLUME_INFO_PPI__

EFI_FORWARD_DECLARATION (EFI_PEI_FIRMWARE_VOLUME_INFO_PPI);


//
// The PPI GUID must match the EFI_GUID FvFormat value
//
#define EFI_PEI_FIRMWARE_VOLUME_INFO_PPI_GUID \
  { 0x49edb1c1, 0xbf21, 0x4761, { 0xbb, 0x12, 0xeb, 0x0, 0x31, 0xaa, 0xbb, 0x39 } }


struct _EFI_PEI_FIRMWARE_VOLUME_INFO_PPI {
  EFI_GUID            FvFormat;
  VOID                *FvInfo;
  UINT32              FvInfoSize;
  EFI_GUID            *ParentFvName;
  EFI_GUID            *ParentFileName;
};


extern EFI_GUID gEfiFirmwareVolumeInfoPpiGuid;

#endif

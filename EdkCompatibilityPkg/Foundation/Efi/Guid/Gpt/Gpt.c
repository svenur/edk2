/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    Gpt.c
    
Abstract:

  Guids used for the GPT as defined in EFI 1.0

  GPT defines a new disk partitioning scheme and also describes 
  usage of the legacy Master Boot Record (MBR) partitioning scheme. 

--*/

#include "EfiSpec.h"
#include EFI_GUID_DEFINITION (Gpt)

EFI_GUID  gEfiPartTypeUnusedGuid = EFI_PART_TYPE_UNUSED_GUID;

EFI_GUID_STRING(&gEfiPartTypeUnusedGuid, "G0", "Null Partition Type GUID");

EFI_GUID  gEfiPartTypeSystemPartGuid = EFI_PART_TYPE_EFI_SYSTEM_PART_GUID;

EFI_GUID_STRING(&gEfiPartTypeSystemPartGuid, "ESP", "EFI System Partition GUID");

EFI_GUID  gEfiPartTypeLegacyMbrGuid = EFI_PART_TYPE_LEGACY_MBR_GUID;

EFI_GUID_STRING(&gEfiPartTypeLegacyMbrGuid, "Legacy MBR", "Legacy Master Boot Record Partition GUID");

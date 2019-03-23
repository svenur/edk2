/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  GuidedSectionExtraction.c

Abstract:

  GUIDed section extraction protocol as defined in the Tiano File Image 
  Format specification.

--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (GuidedSectionExtraction)

//
// may add more GUIDed section extraction protocol GUID here.
//
EFI_GUID  gEfiCrc32GuidedSectionExtractionProtocolGuid = EFI_CRC32_GUIDED_SECTION_EXTRACTION_PROTOCOL_GUID;

EFI_GUID_STRING
  (
    &gEfiSectionExtractionProtocolGuid, "CRC32 GUIDed Section Extraction Protocol",
      "Tiano CRC32 GUIDed Section Extraction Protocol"
  );

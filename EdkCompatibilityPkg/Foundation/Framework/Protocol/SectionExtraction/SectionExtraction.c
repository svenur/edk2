/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  SectionExtraction.c

Abstract:

  Section Extraction protocol as defined in the Tiano File Image Format
  specification.

--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (SectionExtraction)

EFI_GUID  gEfiSectionExtractionProtocolGuid = EFI_SECTION_EXTRACTION_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiSectionExtractionProtocolGuid, "Section Extraction Protocol", "Tiano Section Extraction Protocol");

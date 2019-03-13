/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  SectionExtraction.c

Abstract:

  Section Extraction Protocol PPI GUID as defined in Tiano

--*/

#include "Tiano.h"
#include "Pei.h"
#include EFI_PPI_DEFINITION (SectionExtraction)

EFI_GUID  gPeiSectionExtractionPpiGuid = EFI_PEI_SECTION_EXTRACTION_PPI_GUID;

EFI_GUID_STRING(&gPeiSectionExtractionPpiGuid, "Section Extraction PPI", "Section Extraction PPI");

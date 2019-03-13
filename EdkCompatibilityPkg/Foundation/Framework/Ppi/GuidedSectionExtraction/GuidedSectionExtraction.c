/*++

Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  GuidedSectionExtraction.c

Abstract:

  PI 1.0 spec definition.

--*/

#include "Tiano.h"
#include "Pei.h"
#include EFI_PPI_DEFINITION (GuidedSectionExtraction)

//
// There is no PPI Guid definition here since this PPI is for
// extract EFI_SECTION_GUID_DEFINED type section.
//

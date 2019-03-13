/*++

Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  GuidedSectionExtraction.h

Abstract:

  PI 1.0 spec definition.

--*/


#ifndef __GUIDED_SECTION_EXTRACTION_PPI_H__
#define __GUIDED_SECTION_EXTRACTION_PPI_H__

EFI_FORWARD_DECLARATION (EFI_PEI_GUIDED_SECTION_EXTRACTION_PPI);

typedef 
EFI_STATUS
(EFIAPI *EFI_PEI_EXTRACT_GUIDED_SECTION)(
  IN CONST EFI_PEI_GUIDED_SECTION_EXTRACTION_PPI  *This,
  IN CONST VOID                                   *InputSection,
  OUT VOID                                        **OutputBuffer,
  OUT UINTN                                       *OutputSize,
  OUT UINT32                                      *AuthenticationStatus
  );

struct _EFI_PEI_GUIDED_SECTION_EXTRACTION_PPI {
  EFI_PEI_EXTRACT_GUIDED_SECTION  ExtractSection;
};

#endif

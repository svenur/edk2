/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  GuidedSectionExtraction.h

Abstract:

  GUIDed section extraction protocol as defined in the Tiano File
  Image Format specification.

  This interface provides a means of decoding a GUID defined encapsulation 
  section. There may be multiple different GUIDs associated with the GUIDed
  section extraction protocol. That is, all instances of the GUIDed section
  extraction protocol must have the same interface structure.

--*/

#ifndef _GUIDED_SECTION_EXTRACTION_PROTOCOL_H
#define _GUIDED_SECTION_EXTRACTION_PROTOCOL_H

#include "EfiFirmwareFileSystem.h"

//
// Protocol GUID definition. Each GUIDed section extraction protocol has the
// same interface but with different GUID. All the GUIDs is defined here.
// May add multiple GUIDs here.
//
#define EFI_CRC32_GUIDED_SECTION_EXTRACTION_PROTOCOL_GUID \
  { \
    0xFC1BCDB0, 0x7D31, 0x49aa, {0x93, 0x6A, 0xA4, 0x60, 0x0D, 0x9D, 0xD0, 0x83} \
  }

//
// Forward reference for pure ANSI compatability
//
EFI_FORWARD_DECLARATION (EFI_GUIDED_SECTION_EXTRACTION_PROTOCOL);

//
// Protocol member functions
//
typedef
EFI_STATUS
(EFIAPI *EFI_EXTRACT_GUIDED_SECTION) (
  IN  EFI_GUIDED_SECTION_EXTRACTION_PROTOCOL          * This,
  IN  VOID                                            *InputSection,
  OUT VOID                                            **OutputBuffer,
  OUT UINTN                                           *OutputSize,
  OUT UINT32                                          *AuthenticationStatus
  );

//
// Protocol definition
//
struct _EFI_GUIDED_SECTION_EXTRACTION_PROTOCOL {
  EFI_EXTRACT_GUIDED_SECTION  ExtractSection;
};

//
// may add other GUID here
//
extern EFI_GUID gEfiCrc32GuidedSectionExtractionProtocolGuid;

#endif

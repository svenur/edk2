/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
  TianoCommon.h

Abstract:

  Tiano specific common definitions besides EfiCommon.h

--*/

#ifndef _TIANO_COMMON_H_
#define _TIANO_COMMON_H_

#include "TianoBind.h"
#include "TianoTypes.h"
#include "EfiStdArg.h"
#include "TianoError.h"
#include "EfiStatusCode.h"
#include "EfiCommon.h"

//
// Define macros for including Architectural Protocols and PPIs
//
#define EFI_ARCH_PROTOCOL_DEFINITION(a) EFI_STRINGIZE (ArchProtocol/a/a.h)
#define EFI_PPI_DEFINITION(a)           EFI_STRINGIZE (Ppi/a/a.h)

//
// These should be used to include protocols.  If they are followed,
// intelligent build tools can be created to check dependencies at build
// time.
//
#define EFI_ARCH_PROTOCOL_PRODUCER(a)   EFI_ARCH_PROTOCOL_DEFINITION (a)
#define EFI_ARCH_PROTOCOL_CONSUMER(a)   EFI_ARCH_PROTOCOL_DEFINITION (a)
#define EFI_ARCH_PROTOCOL_DEPENDENCY(a) EFI_ARCH_PROTOCOL_DEFINITION (a)

#define EFI_PPI_PRODUCER(a)             EFI_PPI_DEFINITION (a)
#define EFI_PPI_CONSUMER(a)             EFI_PPI_DEFINITION (a)
#define EFI_PPI_DEPENDENCY(a)           EFI_PPI_DEFINITION (a)

#endif

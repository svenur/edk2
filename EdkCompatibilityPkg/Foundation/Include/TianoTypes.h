/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  TianoTypes.h

Abstract:

  Tiano specific part besides EfiTypes.h

--*/

#ifndef _TIANO_TYPES_H_
#define _TIANO_TYPES_H_

#include "EfiTypes.h"
#include "TianoSpecTypes.h"

//
// attributes for reserved memory before it is promoted to system memory
//
#define EFI_MEMORY_PRESENT      0x0100000000000000
#define EFI_MEMORY_INITIALIZED  0x0200000000000000
#define EFI_MEMORY_TESTED       0x0400000000000000

//
// range for memory mapped port I/O on IPF
//
#define EFI_MEMORY_PORT_IO  0x4000000000000000

//
// A pointer to a function in IPF points to a plabel.
//
typedef struct {
  UINT64  EntryPoint;
  UINT64  GP;
} EFI_PLABEL;

#endif

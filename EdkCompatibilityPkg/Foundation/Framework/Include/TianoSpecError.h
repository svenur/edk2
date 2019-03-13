/*++

Copyright (c) 2004 - 2011, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  TianoSpecError.h

Abstract:

  Tiano error codes defined in Tiano spec.

--*/

#ifndef _TIANO_SPEC_ERROR_H_
#define _TIANO_SPEC_ERROR_H_

#include <EfiBind.h>
#define TIANO_ERROR(a)          (MAX_2_BITS | (a))

//
// Tiano added a couple of return types. These are owned by UEFI specification
// and Tiano can not use them. Thus for UEFI 2.0 support we moved the values
// to a UEFI OEM extension range to conform to UEFI specification.
//
#if (EFI_SPECIFICATION_VERSION < 0x00020000)
  #define EFI_NOT_AVAILABLE_YET   EFIERR (28)
  #define EFI_UNLOAD_IMAGE        EFIERR (29)
#else
  #define EFI_NOT_AVAILABLE_YET   TIANO_ERROR (0)
  #define EFI_UNLOAD_IMAGE        TIANO_ERROR (1)
#endif

#endif

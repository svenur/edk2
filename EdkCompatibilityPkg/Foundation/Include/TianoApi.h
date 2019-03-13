/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  TianoApi.h

Abstract:

  Tiano intrinsic definitions. 


--*/

#ifndef _TIANO_API_H_
#define _TIANO_API_H_

#include "EfiApi.h"
#include "TianoSpecApi.h"

//
// Pointer to internal runtime function
//
#define EFI_INTERNAL_FUNCTION 0x00000002

//
// Pointer to internal runtime pointer
//
#define EFI_INTERNAL_POINTER  0x00000004

//
// Pointer to internal runtime pointer
//
#define EFI_IPF_GP_POINTER  0x00000008

#define EFI_TPL_DRIVER      6

#endif

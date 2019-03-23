/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  SmmRuntimeLib.h

Abstract:

  SMM Related prototypes that can be referenced for Preboot Configuration only.

--*/

#ifndef _SMM_RUNTIME_LIB_H_
#define _SMM_RUNTIME_LIB_H_

#include "Tiano.h"
#include "EfiRuntimeLib.h"

BOOLEAN
EfiInSmm (
  VOID
  )
/*++

Routine Description:

  Test whether in Smm mode currently.

Arguments:

  None

Returns:

  TRUE      - In Smm mode
  FALSE     - Not in Smm mode

--*/
;

EFI_STATUS
RegisterSmmRuntimeDriver (
  IN EFI_HANDLE             ImageHandle,
  IN EFI_SYSTEM_TABLE       *SystemTable,
  OUT EFI_HANDLE            *SmmImageHandle
  )
/*++

Routine Description:

  Registers a Driver with the SMM.

Arguments:

  ImageHandle     - The firmware allocated handle for the EFI image.  
  SystemTable     - A pointer to the EFI System Table.
  SmmImageHandle  - Image handle returned by the SMM driver.

Returns:

  Status code

--*/
;

#endif

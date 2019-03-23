/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  PeiServicesTablePointerLibInternals.h
    
Abstract: 

  Declarations of internal functions in PeiServicesTableLibKr1.

--*/

#ifndef __PEI_SERVICES_TABLE_POINTER_LIB_INTERTALS_H__
#define __PEI_SERVICES_TABLE_POINTER_LIB_INTERTALS_H__

#include "EdkIIGluePeim.h"

/**
  Reads the current value of Kr1.

  @return The current value of Kr1.

**/
UINT64
EFIAPI
AsmReadKr1 (
  VOID
  );

/**
  Writes the current value of Kr1.

  @param  Value The 64-bit value to write to Kr1.

**/
UINT64
EFIAPI
AsmWriteKr1 (
  IN UINT64  Value
  );

#endif

/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  PeiServicesTablePointer.c
  
Abstract: 

  PEI Services Table Pointer Library.

--*/

#include "EdkIIGluePeim.h"

static EFI_PEI_SERVICES  **gPeiServices;

/**
  The function returns the pointer to PEI services.

  The function returns the pointer to PEI services.
  It will ASSERT() if the pointer to PEI services is NULL.

  @retval  The pointer to PeiServices.

**/
EFI_PEI_SERVICES **
EFIAPI
GetPeiServicesTablePointer (
  VOID
  )
{
  ASSERT (gPeiServices != NULL);
  return gPeiServices;
}


/**
  The constructor function caches the pointer to PEI services.
  
  The constructor function caches the pointer to PEI services.
  It will always return EFI_SUCCESS.

  @param  FfsHeader   Pointer to FFS header the loaded driver.
  @param  PeiServices Pointer to the PEI services.

  @retval EFI_SUCCESS   The constructor always returns EFI_SUCCESS.

**/
EFI_STATUS
EFIAPI
PeiServicesTablePointerLibConstructor (
  IN EFI_FFS_FILE_HEADER  *FfsHeader,
  IN EFI_PEI_SERVICES     **PeiServices
  )
{
  gPeiServices = PeiServices;
  return EFI_SUCCESS;
}

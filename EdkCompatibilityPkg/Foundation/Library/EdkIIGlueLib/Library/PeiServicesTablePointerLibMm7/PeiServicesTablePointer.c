/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  PeiServicesTablePointer.c
  
Abstract: 

  PEI Services Table Pointer Library.

--*/

#include "EdkIIGluePeim.h"

/**
  The function returns the pointer to PeiServices.

  The function returns the pointer to PeiServices.
  It will ASSERT() if the pointer to PeiServices is NULL.

  @retval  The pointer to PeiServices.

**/
EFI_PEI_SERVICES **
EFIAPI
GetPeiServicesTablePointer (
  VOID
  )
{
  IA32_DESCRIPTOR   Idtr;
  EFI_PEI_SERVICES  **PeiServices;

  AsmReadIdtr (&Idtr);
  PeiServices = (EFI_PEI_SERVICES **)(UINTN)(*(UINTN*)(Idtr.Base - sizeof (UINTN)));
  
  if ((*PeiServices)->Hdr.Signature == PEI_SERVICES_SIGNATURE) {
    return PeiServices;
  } else {
    PeiServices = (EFI_PEI_SERVICES **)(UINTN)AsmReadMm7 ();
    ASSERT (PeiServices != NULL);
    return PeiServices;
  }
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
#if (PI_SPECIFICATION_VERSION < 0x00010000)
  AsmWriteMm7 ((UINT64)(UINTN)PeiServices);
#endif
  return EFI_SUCCESS;
}

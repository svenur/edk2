/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  EdkIIGluePeiServicesTablePointerLib.h
  
Abstract: 

  Public header file for PEI Services Table Pointer Lib

--*/

#ifndef __EDKII_GLUE_PEI_SERVICES_TABLE_POINTER_LIB_H__
#define __EDKII_GLUE_PEI_SERVICES_TABLE_POINTER_LIB_H__

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
  );

#endif


/*++

Copyright (c) 2004 - 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
  BsDataHubStatusCodeLib.h
   
Abstract:

  Lib to provide data hub status code reporting.

--*/

#ifndef _EFI_BS_DATA_HUB_STATUS_CODE_LIB_H_
#define _EFI_BS_DATA_HUB_STATUS_CODE_LIB_H_

//
// Statements that include other files
//
#include "Tiano.h"

//
// Initialization function
//
VOID
EFIAPI
BsDataHubInitializeStatusCode (
  IN EFI_HANDLE         ImageHandle,
  IN EFI_SYSTEM_TABLE   *SystemTable
  );

//
// Status code reporting function
//
EFI_STATUS
EFIAPI
BsDataHubReportStatusCode (
  IN EFI_STATUS_CODE_TYPE     CodeType,
  IN EFI_STATUS_CODE_VALUE    Value,
  IN UINT32                   Instance,
  IN EFI_GUID                 * CallerId,
  IN EFI_STATUS_CODE_DATA     * Data OPTIONAL
  );

#endif

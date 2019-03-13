/*++

Copyright (c) 2004 - 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
  BsSerialStatusCodeLib.h
   
Abstract:

  Lib to provide Serial I/O status code reporting.

--*/

#ifndef _EFI_BS_SERIAL_STATUS_CODE_LIB_H_
#define _EFI_BS_SERIAL_STATUS_CODE_LIB_H_

//
// Statements that include other files
//
#include "Tiano.h"

//
// Initialization function
//
VOID
EFIAPI
BsSerialInitializeStatusCode (
  IN EFI_HANDLE         ImageHandle,
  IN EFI_SYSTEM_TABLE   *SystemTable
  );

//
// Status code reporting function
//
EFI_STATUS
EFIAPI
BsSerialReportStatusCode (
  IN EFI_STATUS_CODE_TYPE     CodeType,
  IN EFI_STATUS_CODE_VALUE    Value,
  IN UINT32                   Instance,
  IN EFI_GUID                 * CallerId,
  IN EFI_STATUS_CODE_DATA     * Data OPTIONAL
  );

#endif

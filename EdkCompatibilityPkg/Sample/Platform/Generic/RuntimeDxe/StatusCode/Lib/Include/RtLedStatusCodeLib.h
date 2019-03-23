/*++

Copyright (c) 2004 - 2005, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
  RtLedStatusCodeLib.h
   
Abstract:

  Lib to provide status code reporting via LED.

--*/

#ifndef _RT_LED_STATUS_CODE_H_
#define _RT_LED_STATUS_CODE_H_

#include "Tiano.h"

//
// Initialization function
//
VOID
RtLedInitializeStatusCode (
  IN EFI_HANDLE         ImageHandle,
  IN EFI_SYSTEM_TABLE   *SystemTable
  );

//
// Status code reporting function
//
EFI_STATUS
RtLedReportStatusCode (
  IN EFI_STATUS_CODE_TYPE     CodeType,
  IN EFI_STATUS_CODE_VALUE    Value,
  IN UINT32                   Instance,
  IN EFI_GUID                 * CallerId,
  IN EFI_STATUS_CODE_DATA     * Data OPTIONAL
  );
#endif

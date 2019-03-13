/*++

Copyright (c) 2004 - 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
  RtMemoryStatusCodeLib.h
   
Abstract:

  Lib to provide memory status code reporting.

--*/

#ifndef _EFI_RT_MEMORY_STATUS_CODE_LIB_H_
#define _EFI_RT_MEMORY_STATUS_CODE_LIB_H_

//
// Statements that include other files
//
#include "Tiano.h"

//
// Initialization function
//
VOID
EFIAPI
RtMemoryInitializeStatusCode (
  IN EFI_HANDLE         ImageHandle,
  IN EFI_SYSTEM_TABLE   *SystemTable
  );

//
// Status code reporting function
//
EFI_STATUS
EFIAPI
RtMemoryReportStatusCode (
  IN EFI_STATUS_CODE_TYPE     CodeType,
  IN EFI_STATUS_CODE_VALUE    Value,
  IN UINT32                   Instance,
  IN EFI_GUID                 * CallerId,
  IN EFI_STATUS_CODE_DATA     * Data OPTIONAL
  );

//
// Playback all prior status codes to a listener
//
typedef
EFI_STATUS
(EFIAPI *PLATFORM_REPORT_STATUS_CODE) (
  IN EFI_STATUS_CODE_TYPE     Type,
  IN EFI_STATUS_CODE_VALUE    Value,
  IN UINT32                   Instance,
  IN EFI_GUID                 * CallerId OPTIONAL,
  IN EFI_STATUS_CODE_DATA     * Data OPTIONAL
  );

VOID
EFIAPI
PlaybackStatusCodes (
  IN PLATFORM_REPORT_STATUS_CODE  ReportStatusCode
  );

#endif

/*++

Copyright (c) 2004 - 2005, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  MemoryStatusCodeLib.h

Abstract:

  Lib to provide memory status code reporting.

--*/

#ifndef _PEI_MEMORY_STATUS_CODE_LIB_H_
#define _PEI_MEMORY_STATUS_CODE_LIB_H_

//
// Statements that include other files
//
#include "Tiano.h"
#include "Pei.h"

//
// Publicly exported data
//
extern BOOLEAN  mRunningFromMemory;

//
// Initialization function
//
VOID
MemoryInitializeStatusCode (
  IN EFI_FFS_FILE_HEADER       *FfsHeader,
  IN EFI_PEI_SERVICES          **PeiServices
  );

//
// Status code reporting function
//
EFI_STATUS
MemoryReportStatusCode (
  IN EFI_PEI_SERVICES         **PeiServices,
  IN EFI_STATUS_CODE_TYPE     CodeType,
  IN EFI_STATUS_CODE_VALUE    Value,
  IN UINT32                   Instance,
  IN EFI_GUID                 * CallerId,
  IN EFI_STATUS_CODE_DATA     * Data OPTIONAL
  );

#endif

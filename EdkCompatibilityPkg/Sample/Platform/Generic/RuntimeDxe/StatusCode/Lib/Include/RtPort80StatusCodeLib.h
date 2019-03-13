/*++

Copyright (c) 2004 - 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
  RtPort80StatusCodeLib.h
   
Abstract:

  Lib to provide status code reporting via port 80.

--*/

#ifndef _EFI_PORT_80_STATUS_CODE_H_
#define _EFI_PORT_80_STATUS_CODE_H_

//
// Statements that include other files
//
#include "Tiano.h"

//
// Status code reporting function
//
EFI_STATUS
EFIAPI
RtPort80ReportStatusCode (
  IN EFI_STATUS_CODE_TYPE     CodeType,
  IN EFI_STATUS_CODE_VALUE    Value,
  IN UINT32                   Instance,
  IN EFI_GUID                 * CallerId,
  IN EFI_STATUS_CODE_DATA     * Data OPTIONAL
  );

#endif

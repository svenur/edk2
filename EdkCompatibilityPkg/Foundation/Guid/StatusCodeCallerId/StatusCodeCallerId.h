/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  StatusCodeCallerId.h
    
Abstract:

  GUID used to identify id for the caller who is initiating the Status Code.

--*/

#ifndef _STATUS_CODE_CALLER_ID_H__
#define _STATUS_CODE_CALLER_ID_H__

#include "EfiStatusCode.h"

#ifndef EFI_STANDARD_CALLER_ID_GUID

#define EFI_STANDARD_CALLER_ID_GUID \
  {0xC9DCF469, 0xA7C4, 0x11D5, {0x87, 0xDA, 0x00, 0x06, 0x29, 0x45, 0xC3, 0xB9}}

#endif

extern EFI_GUID gEfiCallerIdGuid;


#endif

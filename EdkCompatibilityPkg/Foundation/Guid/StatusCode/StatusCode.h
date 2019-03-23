/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  StatusCode.h
    
Abstract:

  GUID used to identify Data Hub records that originate from the Tiano 
  ReportStatusCode API.

--*/

#ifndef _STATUS_CODE_H__
#define _STATUS_CODE_H__

#define EFI_STATUS_CODE_GUID \
  { \
    0xd083e94c, 0x6560, 0x42e4, {0xb6, 0xd4, 0x2d, 0xf7, 0x5a, 0xdf, 0x6a, 0x2a} \
  }

extern EFI_GUID gEfiStatusCodeGuid;

#endif

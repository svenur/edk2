/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  EdidActive.h

Abstract:

  EDID Active Protocol from the UEFI 2.0 specification.

  Placed on the video output device child handle that are actively displaying output.

--*/

#ifndef __EDID_ACTIVE_H__
#define __EDID_ACTIVE_H__

#define EFI_EDID_ACTIVE_PROTOCOL_GUID \
  { \
    0xbd8c1056, 0x9f36, 0x44ec, {0x92, 0xa8, 0xa6, 0x33, 0x7f, 0x81, 0x79, 0x86} \
  }

typedef struct {
  UINT32   SizeOfEdid;
  UINT8    *Edid;
} EFI_EDID_ACTIVE_PROTOCOL;

extern EFI_GUID gEfiEdidActiveProtocolGuid;

#endif

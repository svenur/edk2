/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Tiano.h

Abstract:

  Tiano master include file.

  This is the main include file for Tiano components. 

  Don't add include files to the list for convenience, only add things
  that are architectural. Don't add Protocols or GUID include files here

--*/

#ifndef _TIANO_H_
#define _TIANO_H_


#include "TianoCommon.h"
#include "TianoApi.h"
#include "EfiDebug.h"
#include "TianoDevicePath.h"
#include "EfiSpec.h"

//
// EFI Revision information
//
#define EFI_FIRMWARE_MAJOR_REVISION 0x1000
#define EFI_FIRMWARE_MINOR_REVISION 1
#define EFI_FIRMWARE_REVISION       ((EFI_FIRMWARE_MAJOR_REVISION << 16) | (EFI_FIRMWARE_MINOR_REVISION))

#endif

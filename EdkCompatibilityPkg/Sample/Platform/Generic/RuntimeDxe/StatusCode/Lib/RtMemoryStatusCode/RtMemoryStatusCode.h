/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
  RtMemoryStatusCode.h
   
Abstract:

  EFI library to provide status code reporting via a memory journal.

--*/

#ifndef _EFI_RT_MEMORY_STATUS_CODE_H_
#define _EFI_RT_MEMORY_STATUS_CODE_H_

//
// Statements that include other files
//
#include "Tiano.h"
#include "Pei.h"
#include "TianoCommon.h"
#include "EfiRuntimeLib.h"
#include "EfiHobLib.h"
#include "RtPlatformStatusCodeLib.h"

//
// Referenced protocols
//
#include EFI_ARCH_PROTOCOL_DEFINITION (StatusCode)


//
// Consumed protocols
//
#include EFI_PPI_CONSUMER (StatusCodeMemory)

//
// Consumed GUID
//
#include EFI_GUID_DEFINITION (Hob)

#endif

/*++

Copyright (c) 2009 - 2010, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

 TemporaryRamSupport.c

Abstract:

  This file declares Temporary RAM Support PPI.                                   
  This Ppi provides the service that migrates temporary RAM into permanent memory.

--*/

#include "Tiano.h"
#include "PeiBind.h"
#include "PeiApi.h"
#include EFI_PPI_DEFINITION (TemporaryRamSupport)

EFI_GUID  gEfiTemporaryRamSupportPpiGuid = TEMPORARY_RAM_SUPPORT_PPI_GUID;

EFI_GUID_STRING(&gEfiTemporaryRamSupportPpiGuid, "TemporaryRamSupportPpi", "TemporaryRamSupport PPI");

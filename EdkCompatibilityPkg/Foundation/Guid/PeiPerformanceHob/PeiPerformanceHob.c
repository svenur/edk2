/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    OemFvHob.c
    
Abstract:

  The GUID of the GUIDed HOB that represents the OEM FV block.

--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION (PeiPerformanceHob)

EFI_GUID  gEfiPeiPerformanceHobGuid  = EFI_PEI_PERFORMANCE_HOB_GUID;

EFI_GUID_STRING (&gEfiPeiPerformanceHobGuid, "PEI Performance HOB",
                 "Guid for PEI Performance Measurement HOB");


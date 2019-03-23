/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    PeiPerformanceHob.h
    
Abstract:
  The PEI performance HOB definition.

--*/

#ifndef _PEI_PERFORMANCE_HOB_GUID_H_
#define _PEI_PERFORMANCE_HOB_GUID_H_


#define EFI_PEI_PERFORMANCE_HOB_GUID  \
{0x10f432de, 0xdeec, 0x4631, {0x80, 0xcd, 0x47, 0xf6, 0x5d, 0x8f, 0x80, 0xbb}}

#define PEI_PERF_MAX_DESC_STRING 8

typedef struct {
  UINT64          StartTimeCount;
  UINT64          StopTimeCount;
  EFI_GUID        Name;
  UINT16          DescriptionString[PEI_PERF_MAX_DESC_STRING];
} PEI_PERFORMANCE_MEASURE_LOG_ENTRY;

typedef struct {
  UINT32                             NumberOfEntries;
  UINT32                             Reserved;
  PEI_PERFORMANCE_MEASURE_LOG_ENTRY  Log[1];
} EFI_HOB_GUID_DATA_PERFORMANCE_LOG;

extern EFI_GUID gEfiPeiPerformanceHobGuid;

#endif

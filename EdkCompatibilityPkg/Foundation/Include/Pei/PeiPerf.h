/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

 PeiPerf.h

Abstract:
 
 PeiPerf.h provides performance primitives for PEI modules

 
--*/

#ifndef _PEI_PERF_H_
#define _PEI_PERF_H_

VOID
EFIAPI
PeiPerfMeasure (
  EFI_PEI_SERVICES              **PeiServices,
  IN UINT16                     *Token,
  IN EFI_FFS_FILE_HEADER        *FileHeader,
  IN BOOLEAN                    EntryExit,
  IN UINT64                     Value
  )
/*++

Routine Description:

  Log a timestamp count.

Arguments:

  PeiServices - Pointer to the PEI Core Services table
  
  Token       - Pointer to Token Name
  
  FileHeader  - Pointer to the file header

  EntryExit   - Indicates start or stop measurement

  Value       - The start time or the stop time

Returns:

--*/
;

#ifdef EFI_PEI_PERFORMANCE
#define PEI_PERF_START(Ps, Token, FileHeader, Value)  PeiPerfMeasure (Ps, Token, FileHeader, FALSE, Value)
#define PEI_PERF_END(Ps, Token, FileHeader, Value)    PeiPerfMeasure (Ps, Token, FileHeader, TRUE, Value)
#else
#define PEI_PERF_START(Ps, Token, FileHeader, Value)
#define PEI_PERF_END(Ps, Token, FileHeader, Value)
#endif

#endif

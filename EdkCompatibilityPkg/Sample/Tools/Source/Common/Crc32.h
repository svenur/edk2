/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  crc32.h

Abstract:

  Header file for CalcuateCrc32 routine
  
--*/

#ifndef _CRC32_H
#define _CRC32_H
EFI_STATUS
CalculateCrc32 (
  IN  UINT8                             *Data,
  IN  UINTN                             DataSize,
  IN OUT UINT32                         *CrcOut
  );

/*++

Routine Description:

  The CalculateCrc32 routine.

Arguments:

  Data        - The buffer contaning the data to be processed
  DataSize    - The size of data to be processed
  CrcOut      - A pointer to the caller allocated UINT32 that on
                contains the CRC32 checksum of Data

Returns:

  EFI_SUCCESS               - Calculation is successful.
  EFI_INVALID_PARAMETER     - Data / CrcOut = NULL, or DataSize = 0

--*/
#endif

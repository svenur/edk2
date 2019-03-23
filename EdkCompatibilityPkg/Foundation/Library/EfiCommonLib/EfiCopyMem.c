/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  EfiCopyMem.c

Abstract:

  Implementation of the EfiCopyMem routine. This function is broken
  out into its own source file so that it can be excluded from a
  build for a particular platform easily if an optimized version 
  is desired.

--*/

#include "Tiano.h"

VOID
EfiCommonLibCopyMem (
  IN VOID   *Destination,
  IN VOID   *Source,
  IN UINTN  Length
  )
/*++

Routine Description:

  Copy Length bytes from Source to Destination.

Arguments:

  Destination - Target of copy

  Source      - Place to copy from

  Length      - Number of bytes to copy

Returns:

  None

--*/
{
  CHAR8 *Destination8;
  CHAR8 *Source8;

  if (Source < Destination) {
    Destination8  = (CHAR8 *) Destination + Length - 1;
    Source8       = (CHAR8 *) Source + Length - 1;
    while (Length--) {
      *(Destination8--) = *(Source8--);
    }
  } else {
    Destination8  = (CHAR8 *) Destination;
    Source8       = (CHAR8 *) Source;
    while (Length--) {
      *(Destination8++) = *(Source8++);
    }
  }
}

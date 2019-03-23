/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  CopyMem.c
  
Abstract: 

  Internal CopyMem

--*/

#include "BaseMemoryLibInternal.h"

/**
  Copy Length bytes from Source to Destination.

  @param  Destination Target of copy
  @param  Source Place to copy from
  @param  Length Number of bytes to copy

  @return Destination

**/
VOID *
EFIAPI
InternalMemCopyMem (
  OUT     VOID                      *Destination,
  IN      CONST VOID                *Source,
  IN      UINTN                     Length
  )
{
  //
  // Declare the local variables that actually move the data elements as
  // volatile to prevent the optimizer from replacing this function with
  // the intrinsic memcpy()
  //
  volatile UINT8                    *Destination8;
  CONST UINT8                       *Source8;

  if (Source > Destination) {
    Destination8 = (UINT8*)Destination;
    Source8 = (CONST UINT8*)Source;
    while (Length-- != 0) {
      *(Destination8++) = *(Source8++);
    }
  } else if (Source < Destination) {
    Destination8 = (UINT8*)Destination + Length;
    Source8 = (CONST UINT8*)Source + Length;
    while (Length-- != 0) {
      *(--Destination8) = *(--Source8);
    }
  }
  return Destination;
}

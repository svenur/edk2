/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  SetMem.c
  
Abstract: 

  Internal SetMem

--*/

#include "BaseMemoryLibInternal.h"

/**
  Set Buffer to Value for Size bytes.

  @param  Buffer Memory to set.
  @param  Size Number of bytes to set
  @param  Value Value of the set operation.

  @return Buffer

**/
VOID *
EFIAPI
InternalMemSetMem (
  IN      VOID                      *Buffer,
  IN      UINTN                     Size,
  IN      UINT8                     Value
  )
{
  //
  // Declare the local variables that actually move the data elements as
  // volatile to prevent the optimizer from replacing this function with
  // the intrinsic memset()
  //
  volatile UINT8                    *Pointer;

  Pointer = (UINT8*)Buffer;
  while (Size-- != 0) {
    *(Pointer++) = Value;
  }
  return Buffer;
}

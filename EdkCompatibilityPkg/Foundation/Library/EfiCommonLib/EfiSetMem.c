/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  EfiSetMem.c

Abstract:

  Implementation of the EfiSetMem routine. This function is broken
  out into its own source file so that it can be excluded from a
  build for a particular platform easily if an optimized version 
  is desired.

--*/

#include "Tiano.h"
#include "EfiCommonLib.h"


VOID
EfiCommonLibSetMem (
  IN VOID   *Buffer,
  IN UINTN  Size,
  IN UINT8  Value
  )
/*++

Routine Description:

  Set Buffer to Value for Size bytes.

Arguments:

  Buffer  - Memory to set.

  Size    - Number of bytes to set

  Value   - Value of the set operation.

Returns:

  None

--*/
{
  INT8  *Ptr;

  if (Value == 0) {
    EfiCommonLibZeroMem (Buffer, Size);
  } else {
    Ptr = Buffer;
    while (Size--) {
      *(Ptr++) = Value;
    }
  }
}

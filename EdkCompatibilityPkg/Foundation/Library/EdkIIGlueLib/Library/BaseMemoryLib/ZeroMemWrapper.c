/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  ZeroMemWrapper.c
  
Abstract: 

  ZeroMem() implementation.

--*/

#include "BaseMemoryLibInternal.h"

/**
  Fills a target buffer with zeros, and returns the target buffer.

  This function fills Length bytes of Buffer with zeros, and returns Buffer.
  If Length > 0 and Buffer is NULL, then ASSERT().
  If Length is greater than (MAX_ADDRESS ? Buffer + 1), then ASSERT().

  @param  Buffer      Pointer to the target buffer to fill with zeros.
  @param  Length      Number of bytes in Buffer to fill with zeros.

  @return Buffer.

**/
VOID *
EFIAPI
GlueZeroMem (
  OUT VOID  *Buffer,
  IN UINTN  Length
  )
{
  ASSERT (!(Buffer == NULL && Length > 0));
  ASSERT (Length <= (MAX_ADDRESS - (UINTN)Buffer + 1));
  return InternalMemZeroMem (Buffer, Length);
}

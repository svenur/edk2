/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  SetJump.c
  
Abstract: 

  Internal ASSERT () functions for SetJump.

--*/

#include "BaseLibInternals.h"

/**
  Worker function that checks ASSERT condition for JumpBuffer

  Checks ASSERT condition for JumpBuffer.

  If JumpBuffer is NULL, then ASSERT().
  If JumpBuffer is not aligned on a BASE_LIBRARY_JUMP_BUFFER_ALIGNMENT
  boundary, then ASSERT().

  @param  JumpBuffer    A pointer to CPU context buffer.

**/
VOID
EFIAPI
InternalAssertJumpBuffer (
  IN      BASE_LIBRARY_JUMP_BUFFER  *JumpBuffer
  )
{
  ASSERT (JumpBuffer != NULL);

  ASSERT (((UINTN)JumpBuffer & ((BASE_LIBRARY_JUMP_BUFFER_ALIGNMENT - 1) >> 8)) == 0);
}

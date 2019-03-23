/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  SwapBytes32.c
  
Abstract: 

  Math worker functions.

--*/

#include "BaseLibInternals.h"

/**
  Switches the endianess of a 32-bit integer.

  This function swaps the bytes in a 32-bit unsigned value to switch the value
  from little endian to big endian or vice versa. The byte swapped value is
  returned.

  @param  Operand A 32-bit unsigned value.

  @return The byte swaped Operand.

**/
UINT32
EFIAPI
SwapBytes32 (
  IN      UINT32                    Operand
  )
{
  UINT32  LowerBytes;
  UINT32  HigherBytes;

  LowerBytes  = (UINT32) SwapBytes16 ((UINT16) Operand);
  HigherBytes = (UINT32) SwapBytes16 ((UINT16) (Operand >> 16));

  return (LowerBytes << 16 | HigherBytes);
}

/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  SwapBytes16.c
  
Abstract: 

  Math worker functions.

--*/

#include "BaseLibInternals.h"

/**
  Switches the endianess of a 16-bit integer.

  This function swaps the bytes in a 16-bit unsigned value to switch the value
  from little endian to big endian or vice versa. The byte swapped value is
  returned.

  @param  Operand A 16-bit unsigned value.

  @return The byte swaped Operand.

**/
UINT16
EFIAPI
SwapBytes16 (
  IN      UINT16                    Operand
  )
{
  return (UINT16) ((Operand << 8) | (Operand >> 8));
}

/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  memcpy.c

Abstract:

  The Microsoft compiler inlines memcpy and we can not stop it.
  These routines allow the code to link!

  There is no *.h definition of these modules as they are well known by the 
  compiler. See Microsoft documentation for more details!

  volatile is used to prevent the compiler from trying to implement these
  C functions as inline functions. 

--*/

#include "Tiano.h"

VOID *
memcpy (
  OUT VOID        *Dest,
  IN  const VOID  *Src,
  IN  UINTN       Count
  )
{
  volatile UINT8  *Ptr;
  const    UINT8  *Source;
  
  for (Ptr = Dest, Source = Src; Count > 0; Count--, Source++, Ptr++) {
    *Ptr = *Source;
  }

  return Dest;
}


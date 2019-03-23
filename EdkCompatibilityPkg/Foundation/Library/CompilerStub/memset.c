/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  memset.c

Abstract:

  The Microsoft compiler inlines memset and we can not stop it.
  These routines allow the code to link!

  There is no *.h definition of these modules as they are well known by the 
  compiler. See Microsoft documentation for more details!

  volatile is used to prevent the compiler from trying to implement these
  C functions as inline functions. 

--*/

#include "Tiano.h"

VOID *
memset (
  OUT VOID    *Dest,
  IN  int     Char,
  IN  UINTN   Count
  )
{
  volatile UINT8  *Ptr;
  
  for (Ptr = Dest; Count > 0; Count--, Ptr++) {
    *Ptr = (UINT8) Char;
  }

  return Dest;
}


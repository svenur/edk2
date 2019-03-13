/*++

Copyright (c) 2005, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

   IdtDumb.c

Abstract:

--*/

#include "Tiano.h"

UINTN
ReadIdtBase ( 
  VOID 
  ) 
{
  
  return 0;
}


VOID
UpdateIdt (
  UINT32  IdtBase,
  UINT16  IdtLimit 
 )
{
  return;
}


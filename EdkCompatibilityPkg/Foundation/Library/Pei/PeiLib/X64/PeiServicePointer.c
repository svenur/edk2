/*++

Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

    PeiServicePointer.c

Abstract:

--*/

#include "Tiano.h"
#include "PeiApi.h"


#if (PI_SPECIFICATION_VERSION >= 0x00010000)

VOID
SetPeiServicesTablePointer (
  IN EFI_PEI_SERVICES  **PeiServices
  )
/*++

Routine Description:

  Save PeiService pointer so that it can be retrieved anywhere.

Arguments:

  PeiServices     - The direct pointer to PeiServiceTable.
  PhyscialAddress - The physcial address of variable PeiServices.
  
Returns:
  NONE
  
--*/        
{
  return;
}

EFI_PEI_SERVICES **
GetPeiServicesTablePointer (
  VOID 
  )
/*++

Routine Description:

  Get PeiService pointer.

Arguments:

  NONE.
  
Returns:
  The direct pointer to PeiServiceTable.
  
--*/          
{
  return NULL;
}


VOID
MigrateIdtTable (
  IN EFI_PEI_SERVICES  **PeiServices
  )
/*++

Routine Description:

  Migrate IDT from temporary memory to real memory where preceded with 4 bytes for
  storing PeiService pointer.

Arguments:

  PeiServices   - The direct pointer to PeiServiceTable.
  
Returns:

  NONE.
  
--*/  
{
  return;
}

#endif


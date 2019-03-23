/*++

Copyright (c) 2004 - 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  EfiGetConfigTable.c

Abstract:

  Light weight lib to support EFI drivers.

--*/

#include "Tiano.h"
#include "EfiDriverLib.h"

EFI_STATUS
EfiLibGetSystemConfigurationTable (
  IN EFI_GUID *TableGuid,
  OUT VOID **Table
  )
/*++

Routine Description:

  Get table from configuration table by name

Arguments:

  TableGuid       - Table name to search
  
  Table           - Pointer to the table caller wants

Returns: 

  EFI_NOT_FOUND   - Not found the table
  
  EFI_SUCCESS     - Found the table

--*/
{
  UINTN Index;

  *Table = NULL;
  for (Index = 0; Index < gST->NumberOfTableEntries; Index++) {
    if (EfiCompareGuid (TableGuid, &(gST->ConfigurationTable[Index].VendorGuid))) {
      *Table = gST->ConfigurationTable[Index].VendorTable;
      return EFI_SUCCESS;
    }
  }

  return EFI_NOT_FOUND;
}

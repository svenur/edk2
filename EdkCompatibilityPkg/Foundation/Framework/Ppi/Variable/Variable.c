/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Variable.c

Abstract:

  Boot Mode PPI GUID as defined in PEI EAS

--*/

#include "Tiano.h"
#include "PeiBind.h"
#include "PeiApi.h"
#include EFI_PPI_DEFINITION (Variable)

EFI_GUID  gPeiReadOnlyVariablePpiGuid = PEI_READ_ONLY_VARIABLE_ACCESS_PPI_GUID;

EFI_GUID_STRING(&gPeiReadOnlyVariablePpiGuid, "Variable", "Read Only Variable PPI");

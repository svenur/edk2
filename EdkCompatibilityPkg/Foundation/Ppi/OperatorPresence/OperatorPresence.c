/*++

Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  OperatorPresence.c

Abstract:

  PPI GUID definition for PEI_OPERATOR_PRESENCE_PPI

--*/

#include "Tiano.h"

#include EFI_PPI_DEFINITION (OperatorPresence)

EFI_GUID gPeiOperatorPresencePpiGuid = PEI_OPERATOR_PRESENCE_PPI_GUID;

EFI_GUID_STRING(&gPeiOperatorPresencePpiGuid, "OperatorPresence", "Operator Presence Detection");

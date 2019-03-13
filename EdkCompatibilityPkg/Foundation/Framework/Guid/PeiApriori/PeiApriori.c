/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  PeiApriori.c

Abstract:

   PI 1.0 spec definition.

--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION(PeiApriori)

EFI_GUID gEfiPeiAprioriGuid = EFI_PEI_APRIORI_FILE_NAME_GUID;
EFI_GUID_STRING(&gEfiPeiAprioriGuid, "PeiApriori", "Efi PeiApriori")

/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Apriori.c
    
Abstract:

  GUID used as an FV filename for A Priori file. The A Priori file contains a
  list of FV filenames that the DXE dispatcher will schedule reguardless of
  the dependency grammer.

--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION (Apriori)

EFI_GUID  gAprioriGuid = EFI_APRIORI_GUID;

EFI_GUID_STRING(&gAprioriGuid, "Apriori File Name", "Apriori File containing FV GUIDs");

/*++

Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

 PciCfg2.c

Abstract:

  PciCfg2 PPI GUID as defined in PI1.0 specification.

--*/

#include "Tiano.h"
#include "Pei.h"
#include EFI_PPI_DEFINITION (PciCfg2)

EFI_GUID  gPeiPciCfg2PpiGuid = EFI_PEI_PCI_CFG2_PPI_GUID;

EFI_GUID_STRING(&gPeiPciCfg2PpiGuid, "PciCfg2", "PciCfg2 PPI");

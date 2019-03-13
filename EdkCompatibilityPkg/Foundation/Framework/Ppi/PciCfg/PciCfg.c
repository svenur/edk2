/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

 PciCfg.c

Abstract:

  PciCfg PPI GUID as defined in PEI CIS specification.

--*/

#include "Tiano.h"
#include "Pei.h"
#include EFI_PPI_DEFINITION (PciCfg)

EFI_GUID  gPeiPciCfgPpiInServiceTableGuid = PEI_PCI_CFG_PPI_GUID;

EFI_GUID_STRING(&gPeiPciCfgPpiInServiceTableGuid, "PciCfg", "PciCfg PPI");

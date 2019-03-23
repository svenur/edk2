/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

 EcpPciCfg.c

Abstract:

  This PPI which is same with PciCfg PPI. But Modify API is removed.

--*/

#include "Tiano.h"
#include "Pei.h"
#include EFI_PPI_DEFINITION (EcpPciCfg)

EFI_GUID  gEcpPeiPciCfgPpiGuid = ECP_PEI_PCI_CFG_PPI_GUID;

EFI_GUID_STRING(&gEcpPeiPciCfgPpiGuid, "Ecp PciCfg", "Ecp PciCfg PPI");

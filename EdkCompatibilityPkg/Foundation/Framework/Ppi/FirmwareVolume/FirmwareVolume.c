/*++

Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  FirmwareVolume.c

Abstract:

  PI 1.0 spec definition.

--*/


#include "Tiano.h"
#include "Pei.h"
#include EFI_PPI_DEFINITION (FirmwareVolume)

//
// There is no PPI Guid definition here, since the guid of
// this ppi is the same as the firmware volume format Guid.
//

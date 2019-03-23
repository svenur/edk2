/*++

Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  HardwareErrorVariable.c

Abstract:

  GUID for hardware error record variables. Defined in UEFI 2.1.

--*/

#include "EfiSpec.h"
#include EFI_GUID_DEFINITION (HardwareErrorVariable)

EFI_GUID  gEfiHardwareErrorVariableGuid = EFI_HARDWARE_ERROR_VARIABLE_GUID;

EFI_GUID_STRING(&gEfiHardwareErrorVariableGuid, "HwErr", "Hardware Error Variable GUID")

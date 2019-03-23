/*++

Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  HardwareErrorVariable.h

Abstract:

  GUID for hardware error record variables. Defined in UEFI 2.1.

--*/

#ifndef _HARDWARE_ERROR_VARIABLE_GUID_H_
#define _HARDWARE_ERROR_VARIABLE_GUID_H_

#define EFI_HARDWARE_ERROR_VARIABLE_GUID \
  { \
    0x414E6BDD, 0xE47B, 0x47cc, {0xB2, 0x44, 0xBB, 0x61, 0x02, 0x0C, 0xF5, 0x16} \
  }

extern EFI_GUID gEfiHardwareErrorVariableGuid;

#endif

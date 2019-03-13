/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  BootInRecoveryMode.h
    
Abstract:

  Boot Mode PPI as defined in Tiano

--*/

#ifndef _PEI_BOOT_IN_RECOVERY_MODE_PPI_H
#define _PEI_BOOT_IN_RECOVERY_MODE_PPI_H

#define PEI_BOOT_IN_RECOVERY_MODE_PEIM_PPI \
  { \
    0x17ee496a, 0xd8e4, 0x4b9a, {0x94, 0xd1, 0xce, 0x82, 0x72, 0x30, 0x8, 0x50} \
  }

EFI_FORWARD_DECLARATION (PEI_BOOT_IN_RECOVERY_MODE_PPI);

extern EFI_GUID gPeiBootInRecoveryModePpiGuid;

#endif

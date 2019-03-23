/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  BootMode.h
    
Abstract:

  Boot Mode PPI as defined in Tiano

--*/

#ifndef _PEI_MASTER_BOOT_MODE_PPI_H
#define _PEI_MASTER_BOOT_MODE_PPI_H

#define PEI_MASTER_BOOT_MODE_PEIM_PPI \
  { \
    0x7408d748, 0xfc8c, 0x4ee6, {0x92, 0x88, 0xc4, 0xbe, 0xc0, 0x92, 0xa4, 0x10} \
  }

EFI_FORWARD_DECLARATION (PEI_MASTER_BOOT_MODE_PPI);

extern EFI_GUID gPeiMasterBootModePpiGuid;

#endif

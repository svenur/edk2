/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  MemoryDiscovered.h
    
Abstract:

  Memory Discovered PPI as defined in Tiano

--*/

#ifndef _PEI_MEMORY_DISCOVERED_PPI_H
#define _PEI_MEMORY_DISCOVERED_PPI_H

#define PEI_PERMANENT_MEMORY_INSTALLED_PPI_GUID \
  { \
    0xf894643d, 0xc449, 0x42d1, {0x8e, 0xa8, 0x85, 0xbd, 0xd8, 0xc6, 0x5b, 0xde} \
  }

EFI_FORWARD_DECLARATION (PEI_PERMANENT_MEMORY_INSTALLED_PPI);

extern EFI_GUID gPeiMemoryDiscoveredPpiGuid;

#endif

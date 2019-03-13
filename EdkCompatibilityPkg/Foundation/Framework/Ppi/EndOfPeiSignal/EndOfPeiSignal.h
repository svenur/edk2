/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  EndOfPeiSignal.h
    
Abstract:

  PPI to be used to signal when the PEI ownership of the memory map
  officially ends and DXE will take over

--*/

#ifndef _PEI_END_OF_PEI_SIGNAL_PPI_H
#define _PEI_END_OF_PEI_SIGNAL_PPI_H

#define PEI_END_OF_PEI_PHASE_PPI_GUID \
  { \
    0x605EA650, 0xC65C, 0x42e1, {0xBA, 0x80, 0x91, 0xA5, 0x2A, 0xB6, 0x18, 0xC6} \
  }

EFI_FORWARD_DECLARATION (PEI_END_OF_PEI_SIGNAL_PPI);

extern EFI_GUID gEndOfPeiSignalPpiGuid;

#endif

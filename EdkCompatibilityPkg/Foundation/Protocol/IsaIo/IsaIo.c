/*++

Copyright (c) 2004 - 2008, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    IsaIo.c
    
Abstract:

    EFI_ISA_IO_PROTOCOL

Revision History

--*/

#include "Tiano.h"

#include EFI_PROTOCOL_DEFINITION (IsaIo)

//
// EFI_ISA_IO_PROTOCOL
//
EFI_GUID  gEfiIsaIoProtocolGuid = EFI_ISA_IO_PROTOCOL_GUID;
EFI_GUID_STRING(&gEfiIsaIoProtocolGuid, "ISA IO Protocol", "ISA IO Protocol");


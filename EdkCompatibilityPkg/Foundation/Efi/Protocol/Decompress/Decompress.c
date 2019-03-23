/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    Decompress.c
    
Abstract:

  The GUID for the EFI Decompress Protocol

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (Decompress)

EFI_GUID  gEfiDecompressProtocolGuid = EFI_DECOMPRESS_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiDecompressProtocolGuid, "Decompress", "Decompression Protocol");

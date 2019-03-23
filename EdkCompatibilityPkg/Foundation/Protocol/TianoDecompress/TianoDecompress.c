/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    TianoDecompress.c
    
Abstract:

  The GUID for the Tiano Decompress Protocol

--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION(TianoDecompress)

EFI_GUID gEfiTianoDecompressProtocolGuid = EFI_TIANO_DECOMPRESS_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiTianoDecompressProtocolGuid, "Tiano Decompress", "Tiano Decompression Protocol");


/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    CustomizedDecompress.c
    
Abstract:

  The GUID for the user Customized Decompress Protocol

--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION(CustomizedDecompress)

EFI_GUID gEfiCustomizedDecompressProtocolGuid = EFI_CUSTOMIZED_DECOMPRESS_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiCustomizedDecompressProtocolGuid, "Cutomized Decompress", "Customized Decompression Protocol");


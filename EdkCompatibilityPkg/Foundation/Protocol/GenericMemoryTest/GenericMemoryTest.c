/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  GenericMemoryTest.c

Abstract:

  The generic memory test protocol is used to test EFI memory.

  For more information please look at EfiMemoryTest.doc

--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (GenericMemoryTest)

EFI_GUID  gEfiGenericMemTestProtocolGuid = EFI_GENERIC_MEMORY_TEST_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiGenericMemTestProtocolGuid, "GenericMemoryTest Protocol", "Tiano Generic Memory Test Protocol");

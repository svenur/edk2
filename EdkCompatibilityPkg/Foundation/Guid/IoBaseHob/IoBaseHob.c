/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  IoBaseHob.c
    
Abstract:

  GUIDs used for IoBase HOB entries in the in the HOB list.

--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION(IoBaseHob)


EFI_GUID gEfiIoBaseHobGuid  = EFI_IOBASE_HOB_GUID;

EFI_GUID_STRING(&gEfiIoBaseHobGuid, "IOBASE HOB", "IOBASE HOB GUID for HOB list.");


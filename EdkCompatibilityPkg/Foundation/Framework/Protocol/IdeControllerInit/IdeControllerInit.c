/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    IdeControllerInit.c
    
Abstract:

    EFI IDE Controller Init Protocol

Revision History

--*/

#include "Tiano.h"

#include EFI_PROTOCOL_DEFINITION (IdeControllerInit)

EFI_GUID  gEfiIdeControllerInitProtocolGuid = EFI_IDE_CONTROLLER_INIT_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiIdeControllerInitProtocolGuid, "IDE Controller Init Protocol", "Platform IDE Init Protocol");

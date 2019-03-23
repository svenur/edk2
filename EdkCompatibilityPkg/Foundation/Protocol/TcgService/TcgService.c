/*++

Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  TcgService.c

Abstract:

  TcgService Protocol GUID as defined in TCG_EFI_Protocol_1_20_Final

  See http://trustedcomputinggroup.org for the latest specification

--*/

#include "Tiano.h"

#include EFI_PROTOCOL_DEFINITION(TcgService)

EFI_GUID gEfiTcgProtocolGuid         = EFI_TCG_PROTOCOL_GUID;
EFI_GUID gEfiTcgPlatformProtocolGuid = EFI_TCG_PLATFORM_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiTcgServiceProtocolGuid, "TcgService", "TCG Services Protocol");

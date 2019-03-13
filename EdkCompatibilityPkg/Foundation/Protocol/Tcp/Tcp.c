/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
  Tcp.c

Abstract:


Revision History

--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION(Tcp)


EFI_GUID gEfiTcpProtocolGuid = EFI_TCP_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiTcpProtocolGuid, "Transmission Control Protocol", "EFI Transmission Control Protocol");

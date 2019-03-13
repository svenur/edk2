/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  SimpleNetwork.c

Abstract:

  Simple Network protocol as defined in the EFI 1.0 specification.

  Basic network device abstraction.

  Rx    - Received
  Tx    - Transmit
  MCast - MultiCast
  ...

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (SimpleNetwork)

EFI_GUID  gEfiSimpleNetworkProtocolGuid = EFI_SIMPLE_NETWORK_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiSimpleNetworkProtocolGuid, "Simple Network Protocol", "EFI 1.0 Simple Network Protocol");

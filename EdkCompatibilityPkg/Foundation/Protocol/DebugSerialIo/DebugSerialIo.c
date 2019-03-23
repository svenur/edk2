/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    DebugSerialIo.c

Abstract:

  Debug Serial IO protocol.

  Abstraction of a basic serial device. Targeted at 16550 UART, but
  could be much more generic.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (DebugSerialIo)

EFI_GUID  gEfiDebugSerialIoProtocolGuid = EFI_DEBUG_SERIAL_IO_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiDebugSerialIoProtocolGuid, "DebugSerialIo Protocol", "EFI 1.0 DebugSerial IO Protocol");

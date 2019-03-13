/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    SerialIo.c

Abstract:

  Serial IO protocol as defined in the EFI 1.0 specification.

  Abstraction of a basic serial device. Targeted at 16550 UART, but
  could be much more generic.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (SerialIo)

EFI_GUID  gEfiSerialIoProtocolGuid = EFI_SERIAL_IO_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiSerialIoProtocolGuid, "SerialIo Protocol", "EFI 1.0 Serial IO Protocol");

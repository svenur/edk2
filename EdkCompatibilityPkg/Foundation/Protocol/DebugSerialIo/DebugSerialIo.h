/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  DebugSerialIo.h

Abstract:

  Debug Serial IO protocol.

  Abstraction of a basic serial device. Targeted at 16550 UART, but
  could be much more generic.

--*/

#ifndef _DEBUG_SERIAL_IO_H_
#define _DEBUG_SERIAL_IO_H_

#define EFI_DEBUG_SERIAL_IO_PROTOCOL_GUID \
{ 0xe683dc4f, 0x9ed, 0x4f22, { 0x86, 0x6b, 0x8e, 0x40, 0x46, 0x94, 0x7c, 0x6c } }

EFI_FORWARD_DECLARATION (EFI_DEBUG_SERIAL_IO_PROTOCOL);

#include EFI_PROTOCOL_DEFINITION (SerialIo)

extern EFI_GUID gEfiDebugSerialIoProtocolGuid;

#endif

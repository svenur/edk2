/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  MonotonicCounter.h

Abstract:

  Monotonic Counter Architectural Protocol as defined in DXE CIS

  This code provides the services required to access the systems monotonic counter

--*/

#ifndef _ARCH_PROTOCOL_MONTONIC_COUNTER_H_
#define _ARCH_PROTOCOL_MONTONIC_COUNTER_H_

//
// Global ID for the Monotonic Counter Architectural Protocol
//
#define EFI_MONTONIC_COUNTER_ARCH_PROTOCOL_GUID \
  {0x1da97072, 0xbddc, 0x4b30, {0x99, 0xf1, 0x72, 0xa0, 0xb5, 0x6f, 0xff, 0x2a}}
  
extern EFI_GUID gEfiMonotonicCounterArchProtocolGuid;

#endif

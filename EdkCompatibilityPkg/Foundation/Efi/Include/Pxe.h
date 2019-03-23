/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

    pxe.h

Abstract:

    PXE 2.1 Common Structures

Revision History

--*/

#ifndef _PXE_H
#define _PXE_H

//
// Packet definitions
//
typedef struct {
  UINT8   BootpOpcode;
  UINT8   BootpHwType;
  UINT8   BootpHwAddrLen;
  UINT8   BootpGateHops;
  UINT32  BootpIdent;
  UINT16  BootpSeconds;
  UINT16  BootpFlags;
  UINT8   BootpCiAddr[4];
  UINT8   BootpYiAddr[4];
  UINT8   BootpSiAddr[4];
  UINT8   BootpGiAddr[4];
  UINT8   BootpHwAddr[16];
  UINT8   BootpSrvName[64];
  UINT8   BootpBootFile[128];
  UINT32  DhcpMagik;
  UINT8   DhcpOptions[56];
} EFI_PXE_BASE_CODE_DHCPV4_PACKET;

typedef union {
  UINT8                           Raw[1472];
  EFI_PXE_BASE_CODE_DHCPV4_PACKET Dhcpv4;

  //
  //  EFI_PXE_BASE_CODE_DHCPV6_PACKET     Dhcpv6;
  //
} EFI_PXE_BASE_CODE_PACKET;

#endif

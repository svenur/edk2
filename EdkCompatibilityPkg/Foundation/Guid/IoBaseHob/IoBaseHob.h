/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  IoBaseHob.h
    
Abstract:

  GUID used for IoBase HOB entries in the HOB list.

--*/

#ifndef _IOBASE_GUID_H_
#define _IOBASE_GUID_H_

#define EFI_IOBASE_HOB_GUID \
{ 0xd4a28a3e, 0xdcf2, 0x43cf, {0xa2, 0xb7, 0xf3, 0x57, 0x2a, 0x7c, 0xab, 0x9} }

extern EFI_GUID gEfiIoBaseHobGuid;

#endif

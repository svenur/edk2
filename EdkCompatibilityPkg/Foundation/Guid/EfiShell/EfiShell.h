/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
  EfiShell.h
    
Abstract:

  FFS Filename for EFI Shell

--*/

#ifndef _EFI_SHELL_H_
#define _EFI_SHELL_H_

#define EFI_SHELL_FILE_GUID  \
  { 0xc57ad6b7, 0x0515, 0x40a8, {0x9d, 0x21, 0x55, 0x16, 0x52, 0x85, 0x4e, 0x37} }

#define EFI_MINI_SHELL_FILE_GUID  \
  { 0x86ad232b, 0xd33a, 0x465c, {0xbf, 0x5f, 0x41, 0x37, 0xb, 0xa9, 0x2f, 0xe2} }

extern EFI_GUID gEfiShellFileGuid;
extern EFI_GUID gEfiMiniShellFileGuid;

#endif

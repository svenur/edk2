/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
  EfiJump.h

Abstract:

  This is the Setjump/Longjump pair for an IA32 processor.

--*/

#ifndef _EFI_JUMP_H_
#define _EFI_JUMP_H_

typedef struct {
  UINT32  ebx;
  UINT32  esi;
  UINT32  edi;
  UINT32  ebp;
  UINT32  esp;
  UINT32  eip;
} EFI_JUMP_BUFFER;

#endif

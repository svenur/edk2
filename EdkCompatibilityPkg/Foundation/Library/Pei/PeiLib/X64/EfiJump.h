/*++

Copyright (c) 2005 - 2010, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
  EfiJump.h

Abstract:

  This is the Setjump/Longjump pair for an x64 processor.

--*/

#ifndef _EFI_JUMP_H_
#define _EFI_JUMP_H_

typedef struct {
  UINT64 Rbx;
  UINT64 Rsp;
  UINT64 Rbp;
  UINT64 Rdi;
  UINT64 Rsi;
  UINT64 R10;
  UINT64 R11;
  UINT64 R12;
  UINT64 R13;
  UINT64 R14;
  UINT64 R15;
  UINT64 Rip;
  UINT32 MxCsr;
  UINT8  XmmBuffer[160]; // XMM6-XMM15
} EFI_JUMP_BUFFER;

#endif

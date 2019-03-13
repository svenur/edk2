/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  PeiTransferControl.h
    
Abstract:

  GUID for the SetJump()/LongJump() APIs shared between PEI and DXE

--*/

#ifndef _PEI_TRANSFER_CONTROL_H_
#define _PEI_TRANSFER_CONTROL_H_

#define EFI_PEI_TRANSFER_CONTROL_GUID  \
  { 0xd8117d02, 0x94a6, 0x11d4, {0x9a, 0x3a, 0x0, 0x90, 0x27, 0x3f, 0xc1, 0x4d} }


EFI_FORWARD_DECLARATION (EFI_PEI_TRANSFER_CONTROL_PROTOCOL);

typedef 
EFI_STATUS
(EFIAPI *EFI_PEI_TRANSFER_CONTROL_SET_JUMP) (
  IN EFI_PEI_TRANSFER_CONTROL_PROTOCOL  *This,
  OUT VOID                                      *Context
  );

typedef 
EFI_STATUS
(EFIAPI *EFI_PEI_TRANSFER_CONTROL_LONG_JUMP) (
  IN EFI_PEI_TRANSFER_CONTROL_PROTOCOL  *This,
  IN VOID                                       *Context
  );

struct _EFI_PEI_TRANSFER_CONTROL_PROTOCOL {
  EFI_PEI_TRANSFER_CONTROL_SET_JUMP    SetJump;
  EFI_PEI_TRANSFER_CONTROL_LONG_JUMP   LongJump;
  UINT32                               JumpContextSize;
};

extern EFI_GUID gEfiPeiTransferControlGuid;

#endif

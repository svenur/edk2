/** @file
  EFI SMM Base Helper Ready Protocol.

  This UEFI protocol is produced by the SMM Base Helper SMM driver to provide
  a Framework SMST to the SMM Base Thunk driver. This protocol is also an indicator
  that the SMM Base Helper SMM driver is ready in SMRAM for communication with
  the SMM Base Thunk driver.

Copyright (c) 2009 - 2010, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef __EFI_SMM_BASE_HELPER_READY_H__
#define __EFI_SMM_BASE_HELPER_READY_H__

#define EFI_SMM_BASE_HELPER_READY_PROTOCOL_GUID  \
  { \
    0x910dca07, 0x1f94, 0x4ee7, { 0xaf, 0x2f, 0xff, 0x72, 0xf3, 0x15, 0x43, 0x53 } \
  }

typedef struct {
  ///
  /// Pointer to the Framework SMST built from PI SMST by SMM Base Helper SMM driver.
  ///
  EFI_SMM_SYSTEM_TABLE          *FrameworkSmst;
  ///
  /// Services function directly called by SMM Base Thunk when in SMM
  ///
  EFI_SMM_HANDLER_ENTRY_POINT2  ServiceEntry;
} EFI_SMM_BASE_HELPER_READY_PROTOCOL;

extern EFI_GUID gEfiSmmBaseHelperReadyProtocolGuid;

#endif

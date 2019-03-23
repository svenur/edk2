/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
  RecoveryModule.h
    
Abstract:

  Recovery Module PPI as defined in Tiano

--*/

#ifndef _PEI_RECOVERY_MODULE_PPI_H
#define _PEI_RECOVERY_MODULE_PPI_H

#define PEI_RECOVERY_MODULE_INTERFACE_PPI \
  { \
    0xFB6D9542, 0x612D, 0x4f45, {0x87, 0x2F, 0x5C, 0xFF, 0x52, 0xE9, 0x3D, 0xCF} \
  }

EFI_FORWARD_DECLARATION (PEI_RECOVERY_MODULE_INTERFACE);

typedef
EFI_STATUS
(EFIAPI *PEI_LOAD_RECOVERY_CAPSULE) (
  IN EFI_PEI_SERVICES                       **PeiServices,
  IN PEI_RECOVERY_MODULE_INTERFACE          * This
  );

struct _PEI_RECOVERY_MODULE_INTERFACE {
  PEI_LOAD_RECOVERY_CAPSULE LoadRecoveryCapsule;
};

extern EFI_GUID gPeiRecoveryModulePpiGuid;

#endif

/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Reset.h

Abstract:

  Reset PPI as defined in Tiano

  Used to reset the platform from PEI

--*/

#ifndef _PEI_RESET_H_
#define _PEI_RESET_H_

#define PEI_RESET_PPI_GUID \
  { \
    0xef398d58, 0x9dfd, 0x4103, {0xbf, 0x94, 0x78, 0xc6, 0xf4, 0xfe, 0x71, 0x2f} \
  }

//
// *******************************************************
// PEI_RESET_TYPE
// *******************************************************
//
typedef enum {
  PeiResetCold,
  PeiResetWarm
} PEI_RESET_TYPE;

typedef
EFI_STATUS
(EFIAPI *PEI_RESET_PPI_RESET_SYSTEM) (
  IN EFI_PEI_SERVICES   **PeiServices
  );

typedef struct {
  PEI_RESET_PPI_RESET_SYSTEM  ResetSystem;
} PEI_RESET_PPI;

extern EFI_GUID gPeiResetPpiGuid;

#endif

/*++

  Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent
  
Module Name:

  S3Resume.h
    
Abstract:

  S3 Resume PPI 

--*/

#ifndef _PEI_S3_RESUME_PPI_H
#define _PEI_S3_RESUME_PPI_H

#define PEI_S3_RESUME_PPI_GUID \
  { \
    0x4426CCB2, 0xE684, 0x4a8a, {0xAE, 0x40, 0x20, 0xD4, 0xB0, 0x25, 0xB7, 0x10} \
  }

EFI_FORWARD_DECLARATION (PEI_S3_RESUME_PPI);

typedef
EFI_STATUS
(EFIAPI *PEI_S3_RESUME_PPI_RESTORE_CONFIG) (
  IN EFI_PEI_SERVICES   **PeiServices
  );

struct _PEI_S3_RESUME_PPI {
  PEI_S3_RESUME_PPI_RESTORE_CONFIG  S3RestoreConfig;
};

extern EFI_GUID gPeiS3ResumePpiGuid;

#endif

/*++

  Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent
  
Module Name:
  
  S3Resume.c

Abstract:

  Boot Script Executer PPI GUID as defined in Tiano

--*/

#include "Tiano.h"
#include "PeiBind.h"
#include "PeiApi.h"
#include EFI_PPI_DEFINITION (S3Resume)

EFI_GUID  gPeiS3ResumePpiGuid = PEI_S3_RESUME_PPI_GUID;

EFI_GUID_STRING(&gPeiS3ResumePpiGuid, "S3Resume", "S3 Resume PPI");

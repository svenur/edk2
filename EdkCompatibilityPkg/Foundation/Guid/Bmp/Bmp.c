/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    Bmp.c
 .c
    
Abstract:

  GUID used as a filename for the BMP logo 

--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION (Bmp)

EFI_GUID gEfiDefaultBmpLogoGuid  = EFI_DEFAULT_BMP_LOGO_GUID;

EFI_GUID_STRING (&gEfiDefaultBmpLogoGuid, "Guid for BMP logo", "Guid for BMP logo");


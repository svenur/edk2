/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

 Security.h

Abstract:

  Security Architectural PPI as defined in Tiano

--*/

#ifndef _SECURITY_PPI_H_
#define _SECURITY_PPI_H_

#define PEI_SECURITY_PPI_GUID \
  { \
    0x1388066e, 0x3a57, 0x4efa, {0x98, 0xf3, 0xc1, 0x2f, 0x3a, 0x95, 0x8a, 0x29} \
  }

EFI_FORWARD_DECLARATION (PEI_SECURITY_PPI);

typedef
EFI_STATUS
(EFIAPI *PEI_SECURITY_AUTHENTICATION_STATE) (
  IN EFI_PEI_SERVICES             **PeiServices,
  IN PEI_SECURITY_PPI             * This,
  IN UINT32                       AuthenticationStatus,
  IN EFI_FFS_FILE_HEADER          * FfsFileHeader,
  IN OUT BOOLEAN                  *StartCrisisRecovery
  );

struct _PEI_SECURITY_PPI {
  PEI_SECURITY_AUTHENTICATION_STATE AuthenticationState;
};

extern EFI_GUID gPeiSecurityPpiGuid;

#endif

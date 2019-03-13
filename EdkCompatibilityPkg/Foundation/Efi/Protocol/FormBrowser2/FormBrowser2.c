/*++

Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  FormBrowser2.c

Abstract:

  The EFI_FORM_BROWSER2_PROTOCOL is the interface to the UEFI configuration driver.

--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (FormBrowser2)

EFI_GUID  gEfiFormBrowser2ProtocolGuid = EFI_FORM_BROWSER2_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiFormBrowser2ProtocolGuid, "Form Browser2 Protocol", "Form Browser 2.1 protocol");

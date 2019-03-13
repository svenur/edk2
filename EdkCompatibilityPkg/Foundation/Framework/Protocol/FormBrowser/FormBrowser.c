/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  FormBrowser.c

Abstract:

  The EFI_FORM_BROWSER_PROTOCOL is the interface to the EFI 
  Configuration Driver.  This will allow the caller to direct the 
  configuration driver to use either the HII database or use the passed 
  in packet of data.  This will also allow the caller to post messages 
  into the configuration drivers internal mailbox.
 
--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (FormBrowser)

EFI_GUID  gEfiFormBrowserProtocolGuid = EFI_FORM_BROWSER_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiFormBrowserProtocolGuid, "Form Browser Protocol", "Form Browser 1.0 protocol");

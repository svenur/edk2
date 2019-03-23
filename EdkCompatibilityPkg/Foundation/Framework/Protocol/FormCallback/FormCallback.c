/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  FormCallback.c

Abstract:

  The EFI_FORM_CALLBACK_PROTOCOL is the defined interface for access to custom 
  NV storage devices as well as communication of user selections in a more 
  interactive environment.  This protocol should be published by hardware 
  specific drivers which want to export access to custom hardware storage or 
  publish IFR which has a requirement to call back the original driver.
 
--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (FormCallback)

EFI_GUID  gEfiFormCallbackProtocolGuid = EFI_FORM_CALLBACK_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiFormCallbackProtocolGuid, "Form Callback Protocol", "Form Callback 1.0 protocol");

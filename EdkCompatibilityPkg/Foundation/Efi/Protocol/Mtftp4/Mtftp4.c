/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Mtftp4.c

Abstract:

  UEFI Multicast Trivial File Transfer Protocol GUID Declaration.
  
--*/

#include "EfiSpec.h"
#include EFI_PROTOCOL_DEFINITION (Mtftp4)

EFI_GUID gEfiMtftp4ServiceBindingProtocolGuid  = EFI_MTFTP4_SERVICE_BINDING_PROTOCOL_GUID;
EFI_GUID gEfiMtftp4ProtocolGuid                = EFI_MTFTP4_PROTOCOL_GUID;

EFI_GUID_STRING (
  &gEfiMtftp4ServiceBindingProtocolGuid, 
  "MTFTP4 Service Binding Protocol", 
  "MTFTP4 Service Binding Protocol"
  );
    
EFI_GUID_STRING (
  &gEfiMtftp4ProtocolGuid,               
  "MTFTP4 Protocol",                 
  "MTFTP4 Protocol"
  );


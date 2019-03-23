/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Print.c

Abstract:

  This file defines the Print protocol interface to provide a unified
  print function
 
--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (Print)

EFI_GUID gEfiPrintProtocolGuid = EFI_PRINT_PROTOCOL_GUID;

EFI_GUID_STRING(&gEfiPrintProtocolGuid, "Print Protocol", "Print 1.0 protocol");


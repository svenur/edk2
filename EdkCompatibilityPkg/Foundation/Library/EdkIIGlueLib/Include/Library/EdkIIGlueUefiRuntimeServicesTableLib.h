/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  EdkIIGlueUefiRuntimeServicesTableLib.h
  
Abstract: 

  Library that provides a global pointer to the UEFI Runtime Services Tables

--*/

#ifndef __EDKII_GLUE_UEFI_RUNTIME_SERVICES_TABLE_LIB_H__
#define __EDKII_GLUE_UEFI_RUNTIME_SERVICES_TABLE_LIB_H__

//
// To avoid symbol collision with gRT in EfiDriverLib
//
#define gRT                  gGlueRT

//
// Cached copy of the EFI Runtime Services Table
//
extern EFI_RUNTIME_SERVICES  *gRT;

#endif

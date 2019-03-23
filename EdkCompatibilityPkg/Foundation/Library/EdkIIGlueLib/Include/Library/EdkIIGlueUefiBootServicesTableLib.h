/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  EdkIIGlueUefiBootServicesTableLib.h
  
Abstract: 

  Public header file for UEFI Boot Services Table Lib

--*/

#ifndef __EDKII_GLUE_UEFI_BOOT_SERVICES_TABLE_LIB_H__
#define __EDKII_GLUE_UEFI_BOOT_SERVICES_TABLE_LIB_H__

//
// Cache the Image Handle
//
extern EFI_HANDLE         gImageHandle;

//
// Cache pointer to the EFI System Table
//
extern EFI_SYSTEM_TABLE   *gST;

//
// Cache pointer to the EFI Boot Services Table
//
extern EFI_BOOT_SERVICES  *gBS;

#endif

/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent
	

Module Name:

  EdkIIGlueDxeServicesTableLib.h
  
Abstract: 

  Library that provides a global pointer to the DXE Services Table

--*/

#ifndef __EDKII_GLUE_DXE_SERVICES_TABLE_LIB_H__
#define __EDKII_GLUE_DXE_SERVICES_TABLE_LIB_H__

//
// Cache copy of the DXE Services Table
//
extern EFI_DXE_SERVICES  *gDS;

#endif


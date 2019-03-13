/** @file
  Framework BDS FrontPage FormSet GUID. It will be used when HiiThunk works with Framework BDS driver.
  
Copyright (c) 2011, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

**/
#ifndef __FRAMEWORK_BDS_FRONTPAGE_FORMSET_H__
#define __FRAMEWORK_BDS_FRONTPAGE_FORMSET_H__

//
// In order to follow UEFI spec to do auto booting after a time-out, the GUID of Formset of Frontpage must match this value.
//
#define FRAMEWORK_BDS_FRONTPAGE_FORMSET_GUID  { 0x9e0c30bc, 0x3f06, 0x4ba6, {0x82, 0x88, 0x9, 0x17, 0x9b, 0x85, 0x5d, 0xbe }}

extern EFI_GUID gFrameworkBdsFrontPageFormsetGuid;

#endif

/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  EdkIIGluePcdPostCodeLib.h
  
Abstract: 

  PCD values for library customization

--*/

#ifndef __EDKII_GLUE_PCD_POST_CODE_LIB_H__
#define __EDKII_GLUE_PCD_POST_CODE_LIB_H__

//
// Following Pcd values are hard coded at compile time.
// Override these through compiler option "/D" in PlatformTools.env if needed
//

//
// PostCode Pcds
//
#ifndef __EDKII_GLUE_PCD_PcdPostCodePropertyMask__
#define __EDKII_GLUE_PCD_PcdPostCodePropertyMask__     EDKII_GLUE_PostCodePropertyMask
#endif

#include "Pcd/EdkIIGluePcd.h"

#endif

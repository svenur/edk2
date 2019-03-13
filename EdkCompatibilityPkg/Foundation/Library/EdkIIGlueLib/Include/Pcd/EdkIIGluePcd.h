/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  EdkIIGluePcd.h
  
Abstract: 

  Fixed-at-build PCD macro expansion definitions

--*/

#ifndef __EDKII_GLUE_PCD_H__
#define __EDKII_GLUE_PCD_H__

//
// Redefine Pcd functions into compile time hardcoded values
//
#define FixedPcdGet8(TokenName)     __EDKII_GLUE_PCD_##TokenName##__
#define FixedPcdGet16(TokenName)    __EDKII_GLUE_PCD_##TokenName##__
#define FixedPcdGet32(TokenName)    __EDKII_GLUE_PCD_##TokenName##__
#define FixedPcdGet64(TokenName)    __EDKII_GLUE_PCD_##TokenName##__
#define FixedPcdGetBool(TokenName)  __EDKII_GLUE_PCD_##TokenName##__

#define PcdGet8(TokenName)          __EDKII_GLUE_PCD_##TokenName##__
#define PcdGet16(TokenName)         __EDKII_GLUE_PCD_##TokenName##__
#define PcdGet32(TokenName)         __EDKII_GLUE_PCD_##TokenName##__
#define PcdGet64(TokenName)         __EDKII_GLUE_PCD_##TokenName##__
#define PcdGetPtr(TokenName)        __EDKII_GLUE_PCD_##TokenName##__
#define PcdGetBool(TokenName)       __EDKII_GLUE_PCD_##TokenName##__

#endif

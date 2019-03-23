/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  EdkIIGluePcdReportStatusCodeLib.h
  
Abstract: 

  Pcd values for library customization

--*/

#ifndef __EDKII_GLUE_PCD_REPORT_STATUS_CODE_LIB_H__
#define __EDKII_GLUE_PCD_REPORT_STATUS_CODE_LIB_H__

//
// Following Pcd values are hard coded at compile time.
// Override these through compiler option "/D" in PlatformTools.env if needed
//

//
// ReportStatusCode Pcds
//
#ifndef __EDKII_GLUE_PCD_PcdReportStatusCodePropertyMask__
#define __EDKII_GLUE_PCD_PcdReportStatusCodePropertyMask__   EDKII_GLUE_ReportStatusCodePropertyMask
#endif

#include "Pcd/EdkIIGluePcd.h"

#endif

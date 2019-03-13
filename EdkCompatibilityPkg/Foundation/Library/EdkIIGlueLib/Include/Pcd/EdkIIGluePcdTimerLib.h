/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  EdkIIGluePcdTimerLib.h
  
Abstract: 

  PCD values for library customization

--*/

#ifndef __EDKII_GLUE_PCD_TIMER_LIB_H__
#define __EDKII_GLUE_PCD_TIMER_LIB_H__

//
// Following Pcd values are hard coded at compile time.
// Override these through compiler option "/D" in PlatformTools.env if needed
//


//
// Timer Lib Pcds
//
#ifndef __EDKII_GLUE_PCD_PcdFSBClock__
#define __EDKII_GLUE_PCD_PcdFSBClock__   EDKII_GLUE_FSBClock
#endif

#include "Pcd/EdkIIGluePcd.h"
#endif

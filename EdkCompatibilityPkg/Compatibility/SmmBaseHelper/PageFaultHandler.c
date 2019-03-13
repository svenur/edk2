/** @file
  Page fault handler that does nothing.

  Copyright (c) 2010, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

/**
  The dummy handler that does nothing.
  
  The function is only used by systems that don't use paging but need
  build pass.

**/
VOID
PageFaultHandlerHook (
  VOID
  )
{
}

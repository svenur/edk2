/**
  AsmReadLdtr function

  Copyright (c) 2006 - 2007, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BaseLibInternals.h"

UINT16
EFIAPI
AsmReadLdtr (
  VOID
  )
{
  _asm {
    sldt    ax
  }
}


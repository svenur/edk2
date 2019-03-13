/** @file
  Default implementation of architecture specific routines related to
  PersistAcrossReset capsules

  Copyright (c) 2018, Linaro, Ltd. All rights reserved.<BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "CapsuleService.h"

/**
  Whether the platform supports capsules that persist across reset. Note that
  some platforms only support such capsules at boot time.

  @return TRUE  if a PersistAcrossReset capsule may be passed to UpdateCapsule()
                at this time
          FALSE otherwise
**/
BOOLEAN
IsPersistAcrossResetCapsuleSupported (
  VOID
  )
{
  return FeaturePcdGet (PcdSupportUpdateCapsuleReset);
}

/**
  Writes Back a range of data cache lines covering a set of capsules in memory.

  Writes Back the data cache lines specified by ScatterGatherList.

  @param  ScatterGatherList Physical address of the data structure that
                            describes a set of capsules in memory

**/
VOID
CapsuleCacheWriteBack (
  IN  EFI_PHYSICAL_ADDRESS    ScatterGatherList
  )
{
}

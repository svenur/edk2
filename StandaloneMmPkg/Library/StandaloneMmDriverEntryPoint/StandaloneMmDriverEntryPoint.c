/** @file
  Entry point to a Standalone MM driver.

Copyright (c) 2015, Intel Corporation. All rights reserved.<BR>
Copyright (c) 2016 - 2018, ARM Ltd. All rights reserved.<BR>

SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include <PiMm.h>

#include <Library/BaseLib.h>
#include <Library/DebugLib.h>

VOID
EFIAPI
ProcessLibraryConstructorList (
  IN EFI_HANDLE               ImageHandle,
  IN IN EFI_MM_SYSTEM_TABLE   *MmSystemTable
  );

EFI_STATUS
EFIAPI
ProcessModuleEntryPointList (
  IN EFI_HANDLE               ImageHandle,
  IN IN EFI_MM_SYSTEM_TABLE   *MmSystemTable
  );

VOID
EFIAPI
ProcessLibraryDestructorList (
  IN EFI_HANDLE               ImageHandle,
  IN IN EFI_MM_SYSTEM_TABLE   *MmSystemTable
  );

/**
  The entry point of PE/COFF Image for a Standalone MM Driver.

  This function is the entry point for a Standalone MM Driver.
  This function must call ProcessLibraryConstructorList() and
  ProcessModuleEntryPointList().
  If the return status from ProcessModuleEntryPointList()
  is an error status, then ProcessLibraryDestructorList() must be called.
  The return value from ProcessModuleEntryPointList() is returned.
  If _gDriverUnloadImageCount is greater than zero, then an unload
  handler must be registered for this image
  and the unload handler must invoke ProcessModuleUnloadList().
  If _gUefiDriverRevision is not zero and SystemTable->Hdr.Revision is less
  than _gUefiDriverRevison, then return EFI_INCOMPATIBLE_VERSION.


  @param  ImageHandle  The image handle of the Standalone MM Driver.
  @param  SystemTable  A pointer to the EFI System Table.

  @retval  EFI_SUCCESS               The Standalone MM Driver exited normally.
  @retval  EFI_INCOMPATIBLE_VERSION  _gUefiDriverRevision is greater than
                                    SystemTable->Hdr.Revision.
  @retval  Other                     Return value from ProcessModuleEntryPointList().

**/
EFI_STATUS
EFIAPI
_ModuleEntryPoint (
  IN EFI_HANDLE               ImageHandle,
  IN IN EFI_MM_SYSTEM_TABLE   *MmSystemTable
  )
{
  EFI_STATUS                 Status;

  //
  // Call constructor for all libraries
  //
  ProcessLibraryConstructorList (ImageHandle, MmSystemTable);

  //
  // Call the driver entry point
  //
  Status = ProcessModuleEntryPointList (ImageHandle, MmSystemTable);

  //
  // If all of the drivers returned errors, then invoke all of the library destructors
  //
  if (EFI_ERROR (Status)) {
    ProcessLibraryDestructorList (ImageHandle, MmSystemTable);
  }

  //
  // Return the cumulative return status code from all of the driver entry points
  //
  return Status;
}


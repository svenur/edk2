/** @file
  Framework SMM Status Code Protocol on PI SMM Status Code Protocol Thunk.

  This thunk driver locates PI SMM Status Code Protocol in the SMM protocol database and
  installs it in the UEFI protocol database.

  Note that Framework SMM Status Code Protocol and PI SMM Status Code Protocol have identical protocol
  GUID and interface structure, but they are in different handle databases.

  Copyright (c) 2010, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include <PiSmm.h>

#include <Protocol/SmmStatusCode.h>

#include <Library/DebugLib.h>
#include <Library/UefiDriverEntryPoint.h>
#include <Library/SmmServicesTableLib.h>

/**
  Entry point of this thunk driver.

  @param  ImageHandle       The firmware allocated handle for the EFI image.
  @param  SystemTable       A pointer to the EFI System Table.
  
  @retval EFI_SUCCESS       The entry point is executed successfully.

**/
EFI_STATUS
EFIAPI
SmmStatusCodeThunkMain (
  IN EFI_HANDLE         ImageHandle,
  IN EFI_SYSTEM_TABLE   *SystemTable
  )
{
  EFI_STATUS                   Status;
  EFI_HANDLE                   Handle;
  EFI_SMM_STATUS_CODE_PROTOCOL *SmmStatusCode;

  //
  // Locate the PI SMM Status Code Protocol in the SMM protocol database.
  //
  Status = gSmst->SmmLocateProtocol (
                    &gEfiSmmStatusCodeProtocolGuid,
                    NULL,
                    (VOID **)&SmmStatusCode
                    );
  ASSERT_EFI_ERROR (Status);

  //
  // Install the PI SMM Status Code Protocol into the UEFI protocol database.
  //
  Handle = NULL;
  Status = SystemTable->BootServices->InstallProtocolInterface (
                                        &Handle,
                                        &gEfiSmmStatusCodeProtocolGuid,
                                        EFI_NATIVE_INTERFACE,
                                        SmmStatusCode
                                        );
  ASSERT_EFI_ERROR (Status);

  return EFI_SUCCESS;
}

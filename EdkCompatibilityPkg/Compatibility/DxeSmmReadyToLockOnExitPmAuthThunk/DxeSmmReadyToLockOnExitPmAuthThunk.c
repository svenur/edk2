/** @file
  DxeSmmReadyToLock Protocol on ExitPmAuth Protocol Thunk driver.
  EDK platform uses ExitPmAuth point to lock SMRAM and SMM API.
  But EDKII uses DxeSmmReadyToLock. We need a thunk driver to convert this event.

Copyright (c) 2010 - 2011, Intel Corporation. All rights reserved.<BR>

SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include  "DxeSmmReadyToLockOnExitPmAuthThunk.h"

/**
  ExitPmAuth Protocol notification event handler.

  @param[in] Event    Event whose notification function is being invoked.
  @param[in] Context  Pointer to the notification function's context.
**/
VOID
EFIAPI
ExitPmAuthProtocolNotification (
  IN EFI_EVENT  Event,
  IN VOID       *Context
  )
{
  EFI_STATUS Status;
  EFI_HANDLE ImageHandle;
  VOID       *ExitPmAuth;

  //
  // Add more check to locate protocol after got event, because
  // ECP will signal this event immediately once it is register
  // just in case it is already installed.
  //
  Status = gBS->LocateProtocol (
                  &gExitPmAuthProtocolGuid,
                  NULL,
                  &ExitPmAuth
                  );
  if (EFI_ERROR (Status)) {
    return ;
  }

  //
  // Install DxeSmmReadyToLock protocol to let PI SMM lock
  //
  ImageHandle = NULL;
  Status = gBS->InstallProtocolInterface (
                  &ImageHandle,
                  &gEfiDxeSmmReadyToLockProtocolGuid,
                  EFI_NATIVE_INTERFACE,
                  NULL
                  );
  ASSERT_EFI_ERROR (Status);
}

/**
  Entry Point for DxeSmmReadyToLock Protocol on ExitPmAuth Protocol Thunk driver.

  @param[in] ImageHandle  Image handle of this driver.
  @param[in] SystemTable  A Pointer to the EFI System Table.

  @retval EFI_SUCCESS  The entry point is executed successfully.
**/
EFI_STATUS
EFIAPI
DxeSmmReadyToLockMain (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  VOID *Registration;

  //
  // Install notifications for required protocols
  //
  EfiCreateProtocolNotifyEvent (
    &gExitPmAuthProtocolGuid,
    TPL_CALLBACK,
    ExitPmAuthProtocolNotification,
    NULL,
    &Registration
    );

  return EFI_SUCCESS;
}

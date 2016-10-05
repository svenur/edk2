/** @file
  DXE SMM Driver to reproduce Bulzilla issue #51

  https://bugzilla.tianocore.org/show_bug.cgi?id=51
  
  This DXE SMM Driver starts a periodic SMI handler with a period of 8 seconds.
  After this periodic SMI handler is triggered 4 times, it unregisters itself
  from within the SMI handler.  This modifies the linked list of SMI handlers
  managed by the Quark North Cluster SMM Core. 

  Copyright (c) 2016, Intel Corporation. All rights reserved.<BR>
  This program and the accompanying materials
  are licensed and made available under the terms and conditions of the BSD License
  which accompanies this distribution.  The full text of the license may be found at
  http://opensource.org/licenses/bsd-license.php

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/

#include <PiSmm.h>
#include <Library/DebugLib.h>
#include <Library/SmmPeriodicSmiLib.h>

EFI_HANDLE  gPerodicSmiHandle;
UINTN       gPerodicSmiCount = 0;

/**
  This function is a prototype for a periodic SMI handler function 
  that may be enabled with PeriodicSmiEnable() and disabled with
  PeriodicSmiDisable().

  @param[in] Context      Content registered with PeriodicSmiEnable().
  @param[in] ElapsedTime  The actual time in 100ns units elasped since 
                          this function was called.  A value of 0 indicates 
                          an unknown amount of time.
                            
**/
VOID
EFIAPI
PeriodicSmiHandler (
  IN CONST VOID  *Context OPTIONAL,
  IN UINT64      ElapsedTime
  )
{
  //
  // Print a debug message
  //
  DEBUG((DEBUG_ERROR, "\n\nPeriodicSmiHandler()  ElapsedTimer = %ld\n\n", ElapsedTime));
  
  //
  // On the 4th periodic SMI, disable the periodic SMI handler.
  //
  gPerodicSmiCount++;
  if (gPerodicSmiCount >= 4) {
    PeriodicSmiDisable (gPerodicSmiHandle);
    gPerodicSmiCount = 0;
  }
}

/**
  This is the declaration of an EFI image entry point. This entry point is
  the same for UEFI Applications, UEFI OS Loaders, and UEFI Drivers including
  both device drivers and bus drivers.

  @param  ImageHandle           The firmware allocated handle for the UEFI image.
  @param  SystemTable           A pointer to the EFI System Table.

  @retval EFI_SUCCESS           The operation completed successfully.
  @retval Others                An unexpected error occurred.
**/
EFI_STATUS
EFIAPI
ReproduceBug51DriverEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  EFI_STATUS  Status;

  //
  // Use SmmPeriodicSmiLib to enable a preiodic SMI handler with a period 
  // of 8 seconds.
  //
  Status = PeriodicSmiEnable (
             &gPerodicSmiHandle,
             PeriodicSmiHandler,
             NULL,
             8 * 10 * 1000000,
             PERIODIC_SMI_LIBRARY_ANY_CPU,
             0
             );
  ASSERT_EFI_ERROR (Status);
  
  return EFI_SUCCESS;
}

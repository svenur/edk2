/** @file
  Define Name, GUID and data format for an EFI PCD that is used to save the image base and size
  of a code segment which will be loaded and executed by a boot script thunk on S3 boot path.

Copyright (c) 2010, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef _BOOT_SCRIPT_THUNK_VARIABLE_H_
#define _BOOT_SCRIPT_THUNK_VARIABLE_H_

//
// The following structure boosts performance by combining structure all ACPI related variables into one.
//
#pragma pack(1)

typedef struct {
  EFI_PHYSICAL_ADDRESS  BootScriptThunkBase;
  EFI_PHYSICAL_ADDRESS  BootScriptThunkLength;
} BOOT_SCRIPT_THUNK_DATA;

#pragma pack()

#endif

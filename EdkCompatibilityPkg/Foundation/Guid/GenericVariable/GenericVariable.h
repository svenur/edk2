/*++

Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
    GenericVariable.h
    
Abstract:

    The variable space Guid to pair with a Unicode string name to tag an EFI variable

--*/

#ifndef _GENERIC_VARIABLE_H_
#define _GENERIC_VARIABLE_H_

#define EFI_GENERIC_VARIABLE_GUID \
  { \
    0x59d1c24f, 0x50f1, 0x401a, {0xb1, 0x01, 0xf3, 0x3e, 0x0d, 0xae, 0xd4, 0x43} \
  }

extern EFI_GUID gEfiGenericVariableGuid;

#endif

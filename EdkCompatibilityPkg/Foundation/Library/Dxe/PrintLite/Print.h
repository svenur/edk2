/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  Print.h

Abstract:

  Private data for Print.c

--*/

#ifndef _PRINT_H_
#define _PRINT_H_

#define LEFT_JUSTIFY  0x01
#define PREFIX_SIGN   0x02
#define PREFIX_BLANK  0x04
#define COMMA_TYPE    0x08
#define LONG_TYPE     0x10
#define PREFIX_ZERO   0x20

//
// Largest number of characters that can be printed out.
//
#define EFI_DRIVER_LIB_MAX_PRINT_BUFFER (80 * 4)

#endif

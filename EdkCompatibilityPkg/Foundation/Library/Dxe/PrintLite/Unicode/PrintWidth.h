/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  PrintWidth.h

Abstract:

  Unicde option for generic width.
  CHAR_W is Unicode
  STRING_W is L""

--*/

#ifndef _PRINT_WIDTH_H_
#define _PRINT_WIDTH_H_

typedef CHAR16  CHAR_W;
#define STRING_W(_s)                                  L##_s

#define USPrint(Buffer, BufferSize, Format)           SPrint (Buffer, BufferSize, Format)
#define UvSPrint(Buffer, BufferSize, Format, Marker)  VSPrint (Buffer, BufferSize, Format, Marker)

#include "EfiCommonLib.h"

#endif

/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  PrintWidth.h

Abstract:

  Unicde option for generic width.
  CHAR_W is Ascii
  STRING_W is ""

--*/

#ifndef _PRINT_WIDTH_H_
#define _PRINT_WIDTH_H_

typedef CHAR8 CHAR_W;
#define STRING_W(_s)                                  _s

#define ASPrint(Buffer, BufferSize, Format)           SPrint (Buffer, BufferSize, Format)
#define AvSPrint(Buffer, BufferSize, Format, Marker)  VSPrint (Buffer, BufferSize, Format, Marker)

UINTN
UvSPrint (
  OUT CHAR16        *StartOfBuffer,
  IN  UINTN         StrLen,
  IN  CONST CHAR16  *Format,
  IN  VA_LIST       Marker
  )
/*++

Routine Description:

  Internal implementation of USPrint. 
  Process format and place the results in Buffer for wide chars.

Arguments:

  StartOfBuffer        - Wide char buffer to print the results of the parsing of Format into.
  StrLen               - Maximum number of characters to put into buffer.
  Format               - Format string
  Marker               - Vararg list consumed by processing Format.

Returns:

  Number of characters printed.

--*/
;

UINTN
USPrint (
  OUT CHAR16      *Buffer,
  IN UINTN        BufferSize,
  IN CONST CHAR16 *Format,
  ...
  )
/*++

Routine Description:

  Process format and place the results in Buffer for wide chars.

Arguments:

  Buffer      - Wide char buffer to print the results of the parsing of Format into.
  BufferSize  - Maximum number of characters to put into buffer.
  Format      - Format string
  ...         - Vararg list consumed by processing Format.

Returns:

  Number of characters printed.

--*/
;

#endif

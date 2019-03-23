/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  SimpleFileParsing.h

Abstract:

  Function prototypes and defines for the simple file parsing routines.

--*/

#ifndef _SIMPLE_FILE_PARSING_H_
#define _SIMPLE_FILE_PARSING_H_

#define T_CHAR  char

STATUS
SFPInit (
  VOID
  );

STATUS
SFPOpenFile (
  char    *FileName
  );

BOOLEAN
SFPIsKeyword (
  T_CHAR *Str
  );

BOOLEAN
SFPIsToken (
  T_CHAR *Str
  );

BOOLEAN
SFPGetNextToken (
  T_CHAR        *Str,
  unsigned int  Len
  );

BOOLEAN
SFPGetGuidToken (
  T_CHAR *Str,
  UINT32 Len
  );

#define PARSE_GUID_STYLE_5_FIELDS 0

BOOLEAN
SFPGetGuid (
  int         GuidStyle,
  EFI_GUID    *Value
  );

BOOLEAN
SFPSkipToToken (
  T_CHAR *Str
  );

BOOLEAN
SFPGetNumber (
  unsigned int   *Value
  );

BOOLEAN
SFPGetQuotedString (
  T_CHAR      *Str,
  int         Length
  );

BOOLEAN
SFPIsEOF (
  VOID
  );

STATUS
SFPCloseFile (
  VOID
  );

unsigned
int
SFPGetLineNumber (
  VOID
  );

T_CHAR  *
SFPGetFileName (
  VOID
  );

#endif // #ifndef _SIMPLE_FILE_PARSING_H_

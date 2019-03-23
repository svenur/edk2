/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:  

  UtilsMsgs.h
  
Abstract:

  Prototypes for the EFI tools utility functions.
  
--*/

#ifndef _UTILS_MESSAGES_H_
#define _UTILS_MESSAGES_H_

STATUS
GetUtilityStatus (
  VOID
  );

//
// If someone prints an error message and didn't specify a source file name,
// then we print the utility name instead. However they must tell us the
// utility name early on via this function.
//
VOID
SetUtilityName (
  INT8 *ProgramName
  );

void
Error (
  INT8    *FileName,
  UINT32  LineNumber,
  UINT32  ErrorCode,
  INT8    *OffendingText,
  INT8    *MsgFmt,
  ...
  );

void
Warning (
  INT8    *FileName,
  UINT32  LineNumber,
  UINT32  ErrorCode,
  INT8    *OffendingText,
  INT8    *MsgFmt,
  ...
  );

void
DebugMsg (
  INT8    *FileName,
  UINT32  LineNumber,
  UINT32  MsgLevel,
  INT8    *OffendingText,
  INT8    *MsgFmt,
  ...
  );

void
SetDebugMsgMask (
  UINT32    MsgMask
  );

void
ParserSetPosition (
  INT8    *SourceFileName,
  UINT32  LineNum
  );

void
ParserError (
  UINT32  ErrorCode,
  INT8    *OffendingText,
  INT8    *MsgFmt,
  ...
  );

void
ParserWarning (
  UINT32  ErrorCode,
  INT8    *OffendingText,
  INT8    *MsgFmt,
  ...
  );

#endif

/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  EfiUtilityMsgs.h

Abstract:

  Defines and prototypes for common EFI utility error and debug messages.
  
--*/

#ifndef _EFI_UTILITY_MSGS_H_
#define _EFI_UTILITY_MSGS_H_

//
// Status codes returned by EFI utility programs and functions
//
#define STATUS_SUCCESS  0
#define STATUS_WARNING  1
#define STATUS_ERROR    2
#define VOID void 

typedef int STATUS;

#ifdef __cplusplus
extern "C" {
#endif
//
// When we call Error() or Warning(), the module keeps track of the worst
// case reported. GetUtilityStatus() will get the worst-case results, which
// can be used as the return value from the app.
//
STATUS
GetUtilityStatus (
  void
  );

//
// If someone prints an error message and didn't specify a source file name,
// then we print the utility name instead. However they must tell us the
// utility name early on via this function.
//
void
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

void
SetPrintLimits (
  UINT32  NumErrors,
  UINT32  NumWarnings,
  UINT32  NumWarningsPlusErrors
  );

#ifdef __cplusplus
}
#endif

#endif // #ifndef _EFI_UTILITY_MSGS_H_

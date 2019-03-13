/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:  

  Exceptions.h
  
Abstract:

  Defines and function prototypes for the ProcessDsc utility.
  
--*/

#ifndef _EXCEPTIONS_H_
#define _EXCEPTIONS_H_

#define VOID void
#define MAX_EXCEPTION_NESTING 4

//
// Function prototypes
//
int
InitExceptions (
  VOID
  );
int
TryException (
  VOID
  );
char  *
CatchException (
  VOID
  );
int
ExceptionThrown (
  VOID
  );
int
ThrowException (
  char *EMsg
  );

#endif // ifndef _EXCEPTIONS_H_

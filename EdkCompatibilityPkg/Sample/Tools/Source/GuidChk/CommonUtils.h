/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:  

  CommonUtils.h
  
Abstract:

  Common utility defines and structure definitions.
  
--*/

#ifndef _COMMON_UTILS_H_
#define _COMMON_UTILS_H_

//
// Basic types
//
typedef unsigned char UINT8;
typedef char INT8;
typedef unsigned short UINT16;
typedef unsigned int UINT32;

typedef UINT8 BOOLEAN;
typedef UINT32 STATUS;

#define TRUE            1
#define FALSE           0

#define STATUS_SUCCESS  0
#define STATUS_WARNING  1
#define STATUS_ERROR    2

//
// Linked list of strings
//
typedef struct _STRING_LIST {
  struct _STRING_LIST *Next;
  char                *Str;
} STRING_LIST;

int
CreateGuidList (
  INT8    *OutFileName
  );

#endif // #ifndef _COMMON_UTILS_H_

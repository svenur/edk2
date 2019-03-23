/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  DebugAssert.h

Abstract:

  This protocol allows provides debug services to a driver. This is not 
  debugger support, but things like ASSERT() and DEBUG() macros

--*/

#ifndef _DEBUG_ASSERT_H_
#define _DEBUG_ASSERT_H_


#define EFI_DEBUG_ASSERT_PROTOCOL_GUID \
  { 0xbe499c92, 0x7d4b, 0x11d4, {0xbc, 0xee, 0x0, 0x80, 0xc7, 0x3c, 0x88, 0x81} }

//
// Forward reference for pure ANSI compatability
//
EFI_FORWARD_DECLARATION (EFI_DEBUG_ASSERT_PROTOCOL);


typedef
EFI_STATUS
(EFIAPI *EFI_DEBUG_ASSERT) (
  IN EFI_DEBUG_ASSERT_PROTOCOL  *This,
  IN CHAR8                              *FileName,
  IN INTN                               LineNumber,
  IN CHAR8                              *Description
  );

typedef
EFI_STATUS
(EFIAPI *EFI_DEBUG_PRINT) (
  IN EFI_DEBUG_ASSERT_PROTOCOL  *This,
  IN  UINTN                             ErrorLevel,
  IN  CHAR8                             *Format,
  IN  VA_LIST                           Marker
  );

typedef
EFI_STATUS
(EFIAPI *EFI_POST_CODE) (
  IN EFI_DEBUG_ASSERT_PROTOCOL  *This,
  IN  UINT16                            PostCode,
  IN  CHAR8                             *PostCodeString  OPTIONAL
  );

typedef
EFI_STATUS
(EFIAPI *EFI_GET_ERROR_LEVEL) (
  IN EFI_DEBUG_ASSERT_PROTOCOL  *This,
  IN  UINTN                             *ErrorLevel
  );

typedef
EFI_STATUS
(EFIAPI *EFI_SET_ERROR_LEVEL) (
  IN EFI_DEBUG_ASSERT_PROTOCOL  *This,
  IN  UINTN                             ErrorLevel
  );

struct _EFI_DEBUG_ASSERT_PROTOCOL {
  
  EFI_DEBUG_ASSERT    Assert;
  EFI_DEBUG_PRINT     Print;
  EFI_POST_CODE       PostCode;

  EFI_GET_ERROR_LEVEL GetErrorLevel;
  EFI_SET_ERROR_LEVEL SetErrorLevel;

};

extern EFI_GUID gEfiDebugAssertProtocolGuid;

#endif

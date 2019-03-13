/*++

Copyright (c) 2004 - 2010, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  EfiVfr.h

Abstract:

--*/

#ifndef _EFIVFR_H_
#define _EFIVFR_H_

#include "Tiano.h"
#include "TianoHii.h"

#define MAX_PATH                 255
#define MAX_LINE_LEN             4096

#define EFI_IFR_MAX_LENGTH       0xFF

#define EFI_VARSTORE_ID_INVALID  0
#define EFI_VAROFFSET_INVALID    0xFFFF
#define EFI_VARSTORE_ID_START    0x20
#define EFI_STRING_ID_INVALID    0x0
#define EFI_IMAGE_ID_INVALID     0xFFFF

typedef enum {
  QUESTION_NORMAL,
  QUESTION_DATE,
  QUESTION_TIME,
} EFI_QUESION_TYPE;

typedef enum {
  EQUAL,
  LESS_EQUAL,
  LESS_THAN,
  GREATER_THAN,
  GREATER_EQUAL
} EFI_COMPARE_TYPE;

#endif

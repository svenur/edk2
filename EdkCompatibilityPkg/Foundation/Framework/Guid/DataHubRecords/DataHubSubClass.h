/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  DataHubSubClass.h
    
Abstract:

  Definitions for data hub data records that contains a sub class header

Revision History

--*/

#ifndef _DATA_HUB_SUBCLASS_H_
#define _DATA_HUB_SUBCLASS_H_

//
// Sub Class Header type1
//

#define EFI_SUBCLASS_INSTANCE_RESERVED       0
#define EFI_SUBCLASS_INSTANCE_NON_APPLICABLE 0xFFFF  //16 bit

typedef struct {
  UINT32    Version;
  UINT32    HeaderSize;
  UINT16    Instance;
  UINT16    SubInstance;
  UINT32    RecordType;    
} EFI_SUBCLASS_TYPE1_HEADER;

//
// EXP data
//

typedef struct {
  INT16     Value;
  INT16     Exponent;
} EFI_EXP_BASE10_DATA;

typedef struct {
  UINT16    Value;
  UINT16    Exponent;
} EFI_EXP_BASE2_DATA;

//
// Inter link data that references another data record
//

typedef struct {
  EFI_GUID    ProducerName;
  UINT16      Instance;
  UINT16      SubInstance;
} EFI_INTER_LINK_DATA;


//
// String Token Definition
//
#define EFI_STRING_TOKEN    UINT16


#endif

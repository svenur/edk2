/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  EdkIIGlueResourcePublicationLib.h
  
Abstract: 

  Public header file for Resource Publication Lib

--*/

#ifndef __EDKII_GLUE_RESOURCE_PUBLICATION_LIB_H__
#define __EDKII_GLUE_RESOURCE_PUBLICATION_LIB_H__

/**
  
  Declares the presence of permanent system memory in the platform.

  Declares that the system memory buffer specified by MemoryBegin and MemoryLength
  as permanent memory that may be used for general purpose use by software.
  The amount of memory available to software may be less than MemoryLength
  if published memory has alignment restrictions.  

  @param  MemoryBegin               The start address of the memory being declared.
  @param  MemoryLength              The number of bytes of memory being declared.

  @retval  RETURN_SUCCESS           The memory buffer was published.
  @retval  RETURN_OUT_OF_RESOURCES  There are not enough resources to publish the memory buffer

**/
RETURN_STATUS
EFIAPI
PublishSystemMemory (
  IN PHYSICAL_ADDRESS       MemoryBegin,
  IN UINT64                 MemoryLength
  );

#endif

/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:
  
  CustomizedDecompress.h

Abstract:

  Header file for Customized decompression routine
  
--*/
#ifndef _CUSTOMIZED_DECOMPRESS_LIB_H_
#define _CUSTOMIZED_DECOMPRESS_LIB_H_

#include EFI_PROTOCOL_DEFINITION (CustomizedDecompress)

EFI_STATUS
EFIAPI
CustomizedGetInfo (
  IN EFI_CUSTOMIZED_DECOMPRESS_PROTOCOL     *This,
  IN      VOID                              *Source,
  IN      UINT32                            SrcSize,
  OUT     UINT32                            *DstSize,
  OUT     UINT32                            *ScratchSize
  )
/*++

Routine Description:

  The implementation of Customized GetInfo().

Arguments:
  This        - The EFI customized decompress protocol
  Source      - The source buffer containing the compressed data.
  SrcSize     - The size of source buffer
  DstSize     - The size of destination buffer.
  ScratchSize - The size of scratch buffer.

Returns:

  EFI_SUCCESS           - The size of destination buffer and the size of scratch buffer are successfully retrieved.
  EFI_INVALID_PARAMETER - The source data is corrupted
  EFI_UNSUPPORTED       - Not supported

--*/
;

EFI_STATUS
EFIAPI
CustomizedDecompress (
  IN EFI_CUSTOMIZED_DECOMPRESS_PROTOCOL     *This,
  IN      VOID                              *Source,
  IN      UINT32                            SrcSize,
  IN OUT  VOID                              *Destination,
  IN      UINT32                            DstSize,
  IN OUT  VOID                              *Scratch,
  IN      UINT32                            ScratchSize
  )
/*++

Routine Description:

  The implementation of Customized Decompress().

Arguments:

  This        - The protocol instance pointer
  Source      - The source buffer containing the compressed data.
  SrcSize     - The size of source buffer
  Destination - The destination buffer to store the decompressed data
  DstSize     - The size of destination buffer.
  Scratch     - The buffer used internally by the decompress routine. This  buffer is needed to store intermediate data.
  ScratchSize - The size of scratch buffer.

Returns:

  EFI_SUCCESS           - Decompression is successfull
  EFI_INVALID_PARAMETER - The source data is corrupted
  EFI_UNSUPPORTED       - Not supported

--*/
;

EFI_STATUS
InstallCustomizedDecompress (
  EFI_CUSTOMIZED_DECOMPRESS_PROTOCOL  **This
  )
/*++

Routine Description:

  Install customeized decompress protocol.

Arguments:

  This                  - The protocol that needs to be installed.

Returns:

  EFI_SUCCESS           - Always success

--*/
;
#endif

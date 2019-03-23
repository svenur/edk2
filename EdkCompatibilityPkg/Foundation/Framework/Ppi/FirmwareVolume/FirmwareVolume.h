/*++

Copyright (c) 2007 - 2010, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  FirmwareVolume.h

Abstract:

  PI 1.0 spec definition.

--*/

#ifndef __FIRMWARE_VOLUME_H__
#define __FIRMWARE_VOLUME_H__

EFI_FORWARD_DECLARATION (EFI_PEI_FIRMWARE_VOLUME_PPI);

//
// Statements that include other files
//
#include "EfiFirmwareVolumeHeader.h"
#include "EfiFirmwareFileSystem.h"
#include "EfiFirmwareVolume.h"

typedef VOID  * EFI_PEI_FILE_HANDLE;
typedef VOID  * EFI_PEI_FV_HANDLE;


typedef struct {
  EFI_GUID                FileName;
  EFI_FV_FILETYPE         FileType;
  EFI_FV_FILE_ATTRIBUTES  FileAttributes;
  VOID                    *Buffer;
  UINT32                  BufferSize;
} EFI_FV_FILE_INFO;

typedef struct {
  EFI_FVB_ATTRIBUTES  FvAttributes;
  EFI_GUID            FvFormat;
  EFI_GUID            FvName;
  VOID                *FvStart;
  UINT64              FvSize;
} EFI_FV_INFO;



typedef
EFI_STATUS
(EFIAPI *EFI_PEI_FV_PROCESS_FV) (
  IN CONST EFI_PEI_FIRMWARE_VOLUME_PPI        *This,
  IN  VOID                                    *Buffer,
  IN  UINTN                                   BufferSize,
  OUT EFI_PEI_FV_HANDLE                       *FvHandle
  );


typedef
EFI_STATUS
(EFIAPI *EFI_PEI_FV_FIND_FILE_TYPE) (
  IN CONST EFI_PEI_FIRMWARE_VOLUME_PPI       *This,
  IN EFI_FV_FILETYPE                         SearchType,
  IN EFI_PEI_FV_HANDLE                       FvHandle,
  IN OUT EFI_PEI_FILE_HANDLE                 *FileHandle
  );

typedef 
EFI_STATUS
(EFIAPI *EFI_PEI_FV_FIND_FILE_NAME) (
  IN CONST EFI_PEI_FIRMWARE_VOLUME_PPI     *This,
  IN CONST EFI_GUID                        *FileName,
  IN OUT EFI_PEI_FV_HANDLE                 *FvHandle,
  OUT EFI_PEI_FILE_HANDLE                  *FileHandle
  );

typedef
EFI_STATUS
(EFIAPI *EFI_PEI_FV_GET_FILE_INFO) (
  IN CONST EFI_PEI_FIRMWARE_VOLUME_PPI     *This,
  IN EFI_PEI_FILE_HANDLE                   FileHandle,
  OUT EFI_FV_FILE_INFO                     *FileInfo
  );

typedef
EFI_STATUS
(EFIAPI *EFI_PEI_FV_GET_INFO)(
  IN CONST EFI_PEI_FIRMWARE_VOLUME_PPI  *This,
  IN EFI_PEI_FV_HANDLE                  FvHandle,
  OUT EFI_FV_INFO                       *VolumeInfo
  );

typedef
EFI_STATUS
(EFIAPI *EFI_PEI_FV_FIND_SECTION) (
  IN CONST EFI_PEI_FIRMWARE_VOLUME_PPI   *This,
  IN EFI_SECTION_TYPE                    SearchType,
  IN EFI_PEI_FILE_HANDLE                 FileHandle,
  OUT VOID                               **SectionData
  );

struct _EFI_PEI_FIRMWARE_VOLUME_PPI {
  EFI_PEI_FV_PROCESS_FV             ProcessVolume;
  EFI_PEI_FV_FIND_FILE_TYPE         FindFileByType;   
  EFI_PEI_FV_FIND_FILE_NAME         FindFileByName;     
  EFI_PEI_FV_GET_FILE_INFO          GetFileInfo;      
  EFI_PEI_FV_GET_INFO               GetVolumeInfo;
  EFI_PEI_FV_FIND_SECTION           FindSectionByType;
};

#endif

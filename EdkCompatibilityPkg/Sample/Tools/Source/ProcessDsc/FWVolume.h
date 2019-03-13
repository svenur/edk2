/*++

Copyright (c) 2004, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  FWVolume.h

Abstract:

  Include file for the module that keeps track of files for the firmware
  volumes.

--*/

#ifndef _FW_VOLUME_H_
#define _FW_VOLUME_H_

//
// class CFirmwareVolume
// {
// public:
//
void
CFVConstructor (
  VOID
  );
void
CFVDestructor (
  VOID
  );

int
CFVAddFVFile (
  char  *Name,
  char  *ComponentType,
  char  *FVs,
  int   ComponentsInstance,
  char  *FFSExt,
  char  *Processor,
  char  *Apriori,
  char  *BaseName,
  char  *Guid
  );

int
CFVSetXRefFileName (
  char    *FileName
  );

int
CFVWriteInfFiles (
  DSC_FILE  *DSC,
  FILE      *MakeFptr
  );

int
NonFFSFVWriteInfFiles (
  DSC_FILE  *DSC,
  char      *FileName
  );

#endif // ifndef _FW_VOLUME_H_

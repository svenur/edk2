/*++

Copyright (c) 2005, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

    SmmCpuState.c

Abstract:

    Protocol definition for EFI_SMM_CPU_SAVE_STATE protocol

Revision History

--*/

#include "Tiano.h"
#include EFI_PROTOCOL_DEFINITION (SmmCpuState)

EFI_GUID gEfiSmmCpuSaveStateProtocolGuid = EFI_SMM_CPU_SAVE_STATE_PROTOCOL_GUID;

EFI_GUID_STRING (&gEfiSmmCpuSaveStateProtocolGuid, "SMM CPU Save State Protocol", "SMM CPU Save State Protocol");

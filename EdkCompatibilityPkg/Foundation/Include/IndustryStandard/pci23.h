/*++

Copyright (c) 2006 - 2010, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

    pci23.h

Abstract:
    Support for PCI 2.3 standard.

Revision History

--*/

#ifndef _PCI23_H
#define _PCI23_H

#include "pci22.h"

//
// PCI_CLASS_MASS_STORAGE
//
#define PCI_CLASS_MASS_STORAGE_ATA    0x05

//
// PCI_CLASS_SERIAL
//
#define PCI_CLASS_SERIAL_IB           0x06

#define PCI_EXP_MAX_CONFIG_OFFSET     0x1000
#define EFI_PCI_CAPABILITY_ID_PCIEXP  0x10

#endif

/** @file
	GUID is the name of events used with CreateEventEx in order to be notified when the EFI boot manager is about to boot a legacy boot option.  Events of this type are notificated just before Int19h is invoked. 

	Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

	Module Name:	EventLegacyBios.h

	@par Revision Reference:
	GUIDs defined in DXE CIS 0.91b.

**/

#ifndef __EVENT_LEGACY_BIOS_GUID_H__
#define __EVENT_LEGACY_BIOS_GUID_H__

#define EFI_EVENT_LEGACY_BOOT_GUID \
   { 0x2a571201, 0x4966, 0x47f6, {0x8b, 0x86, 0xf3, 0x1e, 0x41, 0xf3, 0x2f, 0x10} }

extern EFI_GUID gEfiEventLegacyBootGuid;

#endif

/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

Module Name:

  TianoBind.h

Abstract:

  Tiano's Processor or Compiler specific defines and types for IA-32 
  besides EfiBind.h.

--*/

#ifndef _TIANO_BIND_H_
#define _TIANO_BIND_H_

#include <EfiBind.h>

#ifdef EFI_DEBUG

#ifdef EFI_NT_EMULATOR

#define EFI_DXE_ENTRY_POINT(InitFunction)                     \
					VOID                                                \
					EFIAPI                                              \
					InitFunction (                                      \
  					IN  VOID *HobStart																\
  				);																									\
																															\
          UINTN                                               \
          __stdcall                                           \
          _DllMainCRTStartup (                                \
              UINTN    Inst,                                  \
              UINTN    reason_for_call,                       \
              VOID    *rserved                                \
              )                                               \
          {                                                   \
              return 1;                                       \
          }                                                   \
                                                              \
          VOID                                                \
          __declspec( dllexport  )                            \
          __cdecl                                             \
          InitializeDriver (                                  \
              VOID *Hob                                       \
              )                                               \
          {                                                   \
              InitFunction(Hob);                              \
          }




#define EFI_SMI_HANDLER_ENTRY_POINT(InitFunction)             \
          UINTN                                               \
          __stdcall                                           \
          _DllMainCRTStartup (                                \
              UINTN    Inst,                                  \
              UINTN    reason_for_call,                       \
              VOID    *rserved                                \
              )                                               \
          {                                                   \
              return 1;                                       \
          }                                                   \
                                                              \
          EFI_STATUS                                                 \
          __declspec( dllexport  )                            \
          __cdecl                                             \
          InitializeDriver (                                  \
              VOID  *ImageHandle,                             \
              VOID  *Smst,                                    \
              VOID  *CommunicationBuffer,                     \
              UINTN *SourceSize                               \
              )                                               \
          {                                                   \
              return InitFunction(ImageHandle, Smst, CommunicationBuffer, SourceSize);  \
          }

#else

#define EFI_DXE_ENTRY_POINT(InitFunction)
#define EFI_SMI_HANDLER_ENTRY_POINT(InitFunction)

#endif

#else

#define EFI_DXE_ENTRY_POINT(InitFunction)
#define EFI_SMI_HANDLER_ENTRY_POINT(InitFunction)

#endif

#endif

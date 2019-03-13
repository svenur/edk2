/*++

Copyright (c) 2004 - 2006, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  EdkIIGlueProcessorBind.h
  
Abstract: 

  Processor specific definitions

--*/

#ifndef __EDKII_GLUE_PROCESSOR_BIND_H__
#define __EDKII_GLUE_PROCESSOR_BIND_H__

//
// The Microsoft* C compiler can removed references to unreferenced data items
//  if the /OPT:REF linker option is used. We defined a macro as this is a 
//  a non standard extension
//
#if defined(_MSC_EXTENSIONS)
  #define GLOBAL_REMOVE_IF_UNREFERENCED __declspec(selectany)
#else
  #define GLOBAL_REMOVE_IF_UNREFERENCED
#endif

#if !defined(MDE_CPU_X64)
  #define MDE_CPU_X64
#endif

//
// The stack alignment required for X64
//
#define CPU_STACK_ALIGNMENT   16


#endif

/*++

Copyright (c) 2004 - 2011, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent


Module Name:

  AutoGen.h
  
Abstract: 

  This file is supposed to be used by a .dxe file. To write common .dxs file for EDK
  and EDKII, a header file named AutoGen.h musted be present. In EDK-GlueLib code base, 
  this AutoGen.h plays the role as the AutoGen.h in EDKII. Here the AutoGen.h isn't auto-generated 
  by any tool.

--*/

#ifndef __EDKII_GLUELIB_AUTOGEN_H__
#define __EDKII_GLUELIB_AUTOGEN_H__


//
//  Explanation:
//    BUILD_WITH_GLUELIB was used at the very beginning of EdkIIGlueLib development and 
//    BUILD_WITH_EDKII_GLUE_LIB was introduced later with newer EDK. The old one, BUILD_WITH_GLUELIB, 
//    is remained here only to keep source level compatibility with modules which already use it.
//
//  Both macros are of same effect: to indicate a module it's using EdkIIGlueLib. For newly created 
//  modules, BUILD_WITH_EDKII_GLUE_LIB is recommended to use.
//
//  The macros can be used in .dxs files and source files.
//

#ifndef BUILD_WITH_EDKII_GLUE_LIB
  #define BUILD_WITH_EDKII_GLUE_LIB
#endif

#ifndef BUILD_WITH_GLUELIB
  #define BUILD_WITH_GLUELIB
#endif

#endif

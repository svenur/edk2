#/*++
#  
#  Copyright (c) 2007, Intel Corporation. All rights reserved.<BR>
#  SPDX-License-Identifier: BSD-2-Clause-Patent
#  
#  Module Name:
#  
#    Makefile
#  
#  Abstract:
#  
#    makefile for building the EfiRom utility.
#  
#--*/

#
# Make sure environmental variable EDK_SOURCE is set
#
!IFNDEF EDK_SOURCE
!ERROR EDK_SOURCE environmental variable not set 
!ENDIF

#
# Do this if you want to compile from this directory
#
!IFNDEF TOOLCHAIN
TOOLCHAIN = TOOLCHAIN_MSVC
!ENDIF

!INCLUDE $(BUILD_DIR)\PlatformTools.env

#
# Target specific information
#

TARGET_NAME       = EfiRom
TARGET_SOURCE_DIR = $(EDK_TOOLS_SOURCE)\$(TARGET_NAME)

TARGET_EXE        = $(EDK_TOOLS_OUTPUT)\$(TARGET_NAME).exe
#
# Build targets
#

all: $(TARGET_EXE)

OBJECTS   = $(EDK_TOOLS_OUTPUT)\EfiRom.obj \
            $(EDK_TOOLS_OUTPUT)\EfiCompress.obj
            
#
# Build the EXE by compiling the source files, then linking the resultant
# object files together.
#

$(EDK_TOOLS_OUTPUT)\EfiRom.obj : $(TARGET_SOURCE_DIR)\EfiRom.c
  $(CC) $(C_FLAGS) $(TARGET_SOURCE_DIR)\EfiRom.c /Fo$@

$(EDK_TOOLS_OUTPUT)\EfiCompress.obj : $(EDK_TOOLS_SOURCE)\Common\EfiCompress.c
  $(CC) $(C_FLAGS) $(EDK_TOOLS_SOURCE)\Common\EfiCompress.c /Fo$@
  
#
# Add Binary Build description for this tool.
#

!IF (("$(EFI_BINARY_TOOLS)" == "YES") && EXIST($(EFI_PLATFORM_BIN)\Tools\$(TARGET_NAME).exe))
$(TARGET_EXE): $(EFI_PLATFORM_BIN)\Tools\$(TARGET_NAME).exe
  copy $(EFI_PLATFORM_BIN)\Tools\$(TARGET_NAME).exe $(TARGET_EXE) /Y
  if exist $(EFI_PLATFORM_BIN)\Tools\$(TARGET_NAME).pdb \
  copy $(EFI_PLATFORM_BIN)\Tools\$(TARGET_NAME).pdb $(EDK_TOOLS_OUTPUT)\$(TARGET_NAME).pdb /Y
!ELSE
$(TARGET_EXE): $(OBJECTS)
  $(LINK) $(MSVS_LINK_LIBPATHS) $(L_FLAGS) $(LIBS) /out:$(TARGET_EXE) $(OBJECTS)
!IF ("$(EFI_BINARY_BUILD)" == "YES")
  if not exist $(EFI_PLATFORM_BIN)\Tools mkdir $(EFI_PLATFORM_BIN)\Tools
  if exist $(TARGET_EXE) copy $(TARGET_EXE) $(EFI_PLATFORM_BIN)\tools\$(TARGET_NAME).exe /Y
  if exist $(EDK_TOOLS_OUTPUT)\$(TARGET_NAME).pdb \
  copy $(EDK_TOOLS_OUTPUT)\$(TARGET_NAME).pdb $(EFI_PLATFORM_BIN)\Tools\$(TARGET_NAME).pdb /Y
!ENDIF
!ENDIF

clean:
  @if exist $(EDK_TOOLS_OUTPUT)\$(TARGET_NAME).* del $(EDK_TOOLS_OUTPUT)\$(TARGET_NAME).* > NUL

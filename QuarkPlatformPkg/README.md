**QuarkPlatformPkg - EDK II firmware for Intel(R) Quark SoC X1000 based platforms**

# 

Features
* Minimal Firmware image for initial power-on and debug
* UEFI Firmware image with ability to enable/disable major features such as
    - Logging
    - Source level debug using Intel(R) UDK Debugger Tool
    - Boot Performance Measurements
    - UEFI Secure Boot with Physical Presence
    - TCG Measured Boot using TPM 1.2 hardware devices on I2C bus
* UEFI Shell built into FLASH image
* UEFI Yocto Linux operating system boot support from Micro SD FLASH
* Hardware Support
    -  Intel(R) Quark SoC X1000 CPU
    -  Intel(R) Galileo Development Board
    -  Intel(R) Galileo Gen 2 Development Board
    -  HPET Timer
    -  Real Time Clock
* Major I/O Subsystems
    - PCI including support for Mini PCI Express Cards
    - USB using EHCI and OHCI host controllers
    - Micro SD FLASH with FAT file system support
    - Serial UART up to 921600 baud for console, logging, and debug
* ACPI Tables with ACPI S3 sleep state support
* SMBIOS Tables

# 

Windows Build Instructions

## 

Pre-requisites:
* GIT client: Available from https://git-scm.com/downloads
* Microsoft Visual Studio
* A properly configured ASL compiler:
  - Intel ASL compiler: Available from http://www.acpica.org
  - Microsoft ASL compiler: Available from http://www.acpi.info
* NASM: http://www.nasm.us/

Create a new directory for an EDK II WORKSPACE. 

The code block below shows the GIT clone operations required to pull the EDK II source tree, the FatPkg sources, the pre-built versions of BaseTools as WIN32 binaries, the edk2-non-osi repository that provides a binary file for the Quark Remote Management Unit (RMU).

Next it sets environment variables that must be set before running edkSetup.bat. Since content is being pulled from multiple repositories, the EDK II [Multiple Workspace](https://github.com/tianocore/tianocore.github.io/wiki/Multiple_Workspace)
feature is used.

Next, the edkSetup.bat file is run to complete the initialization of an EDK II build environment.  Two example build commands are shown.  The first one in QuarkPlatformPlg/Quark.dsc builds a full UEFIU firmware image that is able to boot the built-in UEFI Shell and Yocto Linux from a micro SD FLASH card.  The second one in QuarkPlatformPkg/QuarkMin.dsc builds a minimal firmware image that is useful for initial power-on and debug of new features.

``````
git clone https://github.com/tianocore/edk2.git
git clone https://github.com/tianocore/edk2-FatPkg.git FatPkg
git clone https://github.com/tianocore/edk2-BaseTools-win32.git
git clone https://github.com/tianocore/edk2-non-osi.git

set WORKSPACE=%CD%
set PACKAGES_PATH=%WORKSPACE%\edk2;%WORKSPACE%\edk2-non-osi
set EDK_TOOLS_BIN=%WORKSPACE%\edk2-BaseTools-win32

cd edk2
edkSetup.bat

build -a IA32 -t VS2015x86 -p QuarkPlatformPkg/Quark.dsc
build -a IA32 -t VS2015x86 -p QuarkPlatformPkg/QuarkMin.dsc
``````
# 

Linux Build Instructions

# 

Build Options

# 

FLASH Update using DediProg SF100

# 

Setting up a Serial Console and Booting to UEFI Shell

# 

Install, Configure, and Boot Yocto Linux

# 

Source Debug Using Intel(R) UDK Debugger Tool

# 

JTAG Debug using Intel(r) System Studio Debugger

# 

UEFI Secure Boot Feature and Physical Presence

# 

Testing Measured Boot Feature using Atmel I2C TPM on Sparkfun CryptoShield





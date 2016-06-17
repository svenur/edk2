# EDK II - Proposal to organize packages into directories

There have been some discussions about organizing packages into directories.
Below is a proposal for a top level directory structure and a mapping of the
packages from edk2/master.  Where applicable, vendor specific directories 
can be added.

The PACKAGES_PATH feature documented in the link below is used to support
this proposed directory structure with no source file changes.  An example
of setting PACKAGES_PATH in a windows environment is also shown below and
I have verified that platforms can be built using this proposal.

https://github.com/tianocore/tianocore.github.io/wiki/Multiple_Workspace

Please provide feedback on the proposal (for, against, alternate proposal), 
the number/type of top level directories, and the top level directory names.

# Top Level Directory Structure (Listed Alphabetically)
```
edk2
  Application         Applications and application support libraries
  BaseTools           EDK II build tools/scripts
  Conf                EDK II build configuration files
  Core                Platform agnostic packages for core FW services
  Deprecated          Packages that may be removed from edk2/master
  Driver              EDK II Drivers (no platform assumptions)
    <Package1>        Non-Vendor specific EDK II drivers
    <Package2>        Non-Vendor specific EDK II drivers
    . . .
    Vendor            Vendor specific EDK II drivers
      <VendorA>
      <VendorB>
  Platform            Platforms used to validate edk2/master features
    Arm               ARM specific platform packages
    BeagleBoard       Beagle Board specific platform packages
    Common            Non-vendor specific platform packages
    Intel             Intel specific platform packages
    <VendorM>         <VendorM> specific platform packages
    <VendorN>         <VendorN> specific platform packages 
  Silicon             CPU/Chipset/SoC packages
    Arm               Arm specific CPU/Chipset/SoC drivers
    Common            Non-vendor specific CPU/Chipset/SoC drivers
    Intel             Intel specific CPU/Chipset/SoC drivers 
    TexasInstruments  Texas Instruments specific   
    <VendorX>         <VendorX> specific CPU/Chipset/SoC drivers
    <VendorY>         <VendorY> specific CPU/Chipset/SoC drivers
```

# Mapping packages from edk2/master into proposed directory structure
```
edk2
  Application
    AppPkg
    ShellPkg
    StdLib
    StdLibPrivateInternalFiles    
  Core
    CryptoPkg
    IntelFsp2Pkg
    IntelFsp2WrapperPkg
    MdeModulePkg
    MdePkg
    SecurityPkg
    SourceLevelDebugPkg
  Deprecated
    EdkCompatibilityPkg
    EdkShellBinPkg
    EdkShellPkg
    FatBinPkg
    IntelFrameworkModulePkg
    IntelFrameworkPkg
    IntelFspPkg
    IntelFspWrapperPkg
    PerformancePkg
    ShellBinPkg
    UnixPkg
  Driver
    CorebootModulePkg
    EmbeddedPkg
    FatPkg
    NetworkPkg
    OptionRomPkg
    Vendor
  Platform
    Arm
      ArmPlatformPkg
      ArmVirtPkg
    BeagleBoard
      BeagleBoardPkg
    Common    
      DuetPkg
      OvmfPkg
      CorebootPayloadPkg
      EmulatorPkg
      Nt32Pkg
    Intel
      QuarkPlatformPkg
      Vlv2TbltDevicePkg
  Silicon
    Arm
      ArmPkg
      ArmJunoPkg
      ArmVExpressPkg
    Common
      PcAtChipsetPkg
      UefiCpuPkg
    Intel
      QuarkSocPkg
      Vlv2DeviceRefCodePkg
    TexasInstruments
      Omap35xxPkg
```

# Setting PACKAGES_PATH to support builds using proposed directory structure
```
set PACKAGES_PATH=%PACKAGES_PATH%;%WORKSPACE%\edk2\Core
set PACKAGES_PATH=%PACKAGES_PATH%;%WORKSPACE%\edk2\Driver
set PACKAGES_PATH=%PACKAGES_PATH%;%WORKSPACE%\edk2\Silicon\Arm
set PACKAGES_PATH=%PACKAGES_PATH%;%WORKSPACE%\edk2\Silicon\Common
set PACKAGES_PATH=%PACKAGES_PATH%;%WORKSPACE%\edk2\Silicon\Intel
set PACKAGES_PATH=%PACKAGES_PATH%;%WORKSPACE%\edk2\Silicon\TexasIntruments
set PACKAGES_PATH=%PACKAGES_PATH%;%WORKSPACE%\edk2\Platform\Arm
set PACKAGES_PATH=%PACKAGES_PATH%;%WORKSPACE%\edk2\Platform\BeagleBoard
set PACKAGES_PATH=%PACKAGES_PATH%;%WORKSPACE%\edk2\Platform\Common
set PACKAGES_PATH=%PACKAGES_PATH%;%WORKSPACE%\edk2\Platform\Intel
set PACKAGES_PATH=%PACKAGES_PATH%;%WORKSPACE%\edk2\Application
set PACKAGES_PATH=%PACKAGES_PATH%;%WORKSPACE%\edk2\Deprecated
set PACKAGES_PATH=%PACKAGES_PATH%;%WORKSPACE%\edk2
```

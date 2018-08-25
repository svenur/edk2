# EDK II Project

A modern, feature-rich, cross-platform firmware development environment
for the UEFI and PI specifications from www.uefi.org.

Contributions to the EDK II open source project are covered by the
[TianoCore Contribution Agreement 1.1](Contributions.txt)

The majority of the content in the EDK II open source project uses a
[BSD 2-Clause License](License.txt).  The EDK II open source project contains
the following components that are covered by additional licenses:
* [AppPkg/Applications/Python/Python-2.7.2/Tools/pybench](AppPkg/Applications/Python/Python-2.7.2/Tools/pybench/LICENSE)
* [AppPkg/Applications/Python/Python-2.7.2](AppPkg/Applications/Python/Python-2.7.2/LICENSE)
* [AppPkg/Applications/Python/Python-2.7.10](AppPkg/Applications/Python/Python-2.7.10/LICENSE)
* [BaseTools/Source/C/BrotliCompress](BaseTools/Source/C/BrotliCompress/LICENSE)
* [MdeModulePkg/Library/BrotliCustomDecompressLib](MdeModulePkg/Library/BrotliCustomDecompressLib/LICENSE)
* [OvmfPkg](OvmfPkg/License.txt)
* [CryptoPkg/Library/OpensslLib/openssl](CryptoPkg/Library/OpensslLib/openssl/LICENSE)

The EDK II Project is composed of packages.  The maintainers for each package
are listed in [Maintainers.txt](Maintainers.txt).

# Resources
* [TianoCore](http://www.tianocore.org)
* [EDK II](https://github.com/tianocore/tianocore.github.io/wiki/EDK-II)
* [Getting Started with EDK II](https://github.com/tianocore/tianocore.github.io/wiki/Getting-Started-with-EDK-II)
* [Mailing Lists](https://github.com/tianocore/tianocore.github.io/wiki/Mailing-Lists)
* [TianoCore Bugzilla](https://bugzilla.tianocore.org)
* [How To Contribute](https://github.com/tianocore/tianocore.github.io/wiki/How-To-Contribute)


# Download and Build MinnowMax using Linux/GCC

Run the script below from an empty directory.  The script clones the EDK II
repository from GitHub and downloads and unzips the binary support files for the
MinnowBoard MAX.  It then sets up the environment for EDK II builds and builds
the MinnowBoard MAX firmware and generates UEFI Capsules that can be used to
update the MinnowBoard MAX firmware and three sample devices.

```
git clone --recurse-submodules -b edk2-stable201808_GCC_Fixes https://github.com/mdkinney/edk2.git

wget https://firmware.intel.com/sites/default/files/MinnowBoard_MAX-0.97-Binary.Objects.zip
unzip MinnowBoard_MAX-0.97-Binary.Objects.zip
mv MinnowBoard_MAX-0.97-Binary.Objects Vlv2Binaries

mkdir Conf

export WORKSPACE=$PWD
export PACKAGES_PATH=$WORKSPACE/edk2:$WORKSPACE/\Vlv2Binaries
export EDK_TOOLS_PATH=$WORKSPACE/edk2/BaseTools

cd $WORKSPACE/edk2

make -C BaseTools

. edksetup.sh BaseTools

cd Vlv2TbltDevicePkg
./Build_IFWI.sh MNW2 Debug
```

Once all the code is downloaded and installed, only the following commands are
required to setup the environment.  Run these from the same directory used to
install the source and binaries.

```
export WORKSPACE=$PWD
export PACKAGES_PATH=$WORKSPACE/edk2:$WORKSPACE/\Vlv2Binaries
export EDK_TOOLS_PATH=$WORKSPACE/edk2/BaseTools

cd $WORKSPACE/edk2

make -C BaseTools

. edksetup.sh BaseTools

```

Once the environment is setup, the MinnowBoard MAX firmware and capsules can be
rebuilt using the following commands.


* Build Debug Image

```
cd Vlv2TbltDevicePkg
./Build_IFWI.sh MNW2 Debug
```

* Build Release Image

```
cd Vlv2TbltDevicePkg
./Build_IFWI.sh MNW2 Release
```

The generated firmware image is the `MNW2MAX_X64_D_0084_01_GCC.bin` file in
`edk2\Vlv2TbltDevicePkg\Stitch`

The CapsuleApp and generated UEFI Capsules are in `Build\Vlv2TbltDevicePkg\Capsules`

# Download and Build MinnowMax using Windows/Visual Studio

Run the script below from an empty directory.  The script clones the EDK II
repository from GitHub and downloads and unzips the binary support files for the
MinnowBoard MAX.  It then sets up the environment for EDK II builds and builds
the MinnowBoard MAX firmware and generates UEFI Capsules that can be used to
update the MinnowBoard MAX firmware and three sample devices.

```
git clone --recurse-submodules -b edk2-stable201808_GCC_Fixes https://github.com/mdkinney/edk2.git

powershell "& {[Net.ServicePointManager]::SecurityProtocol = [Net.SecurityProtocolType]::Tls12; Invoke-WebRequest -Uri "https://indy.fulgan.com/SSL/openssl-1.0.2o-x64_86-win64.zip -OutFile openssl-1.0.2o-x64_86-win64.zip"}"
powershell Expand-Archive openssl-1.0.2o-x64_86-win64.zip

powershell "& {[Net.ServicePointManager]::SecurityProtocol = [Net.SecurityProtocolType]::Tls12; Invoke-WebRequest -Uri "https://firmware.intel.com/sites/default/files/MinnowBoard_MAX-0.97-Binary.Objects.zip -OutFile MinnowBoard_MAX-0.97-Binary.Objects.zip"}"
powershell Expand-Archive MinnowBoard_MAX-0.97-Binary.Objects.zip .
sleep 1
powershell mv MinnowBoard_MAX-0.97-Binary.Objects Vlv2Binaries

powershell "& {[Net.ServicePointManager]::SecurityProtocol = [Net.SecurityProtocolType]::Tls12; Invoke-WebRequest -Uri "https://www.nasm.us/pub/nasm/releasebuilds/2.13.03/win64/nasm-2.13.03-win64.zip -OutFile nasm-2.13.03-win64.zip"}"
powershell Expand-Archive nasm-2.13.03-win64.zip .

mkdir Conf

set PYTHON_HOME=c:\Python27

set WORKSPACE=%CD%
set EDK_TOOLS_PATH=%WORKSPACE%\edk2\BaseTools
set EDK_TOOLS_BIN=%EDK_TOOLS_PATH%\BinWrappers\WindowsLike
set PACKAGES_PATH=%WORKSPACE%\edk2;%WORKSPACE%\Vlv2Binaries
path=%path%;%EDK_TOOLS_PATH%\Bin\Win32;%WORKSPACE%\openssl-1.0.2o-x64_86-win64
set NASM_PREFIX=%WORKSPACE%\nasm-2.13.03\

cd %WORKSPACE%\edk2

call edkSetup.bat Rebuild

cd Vlv2TbltDevicePkg

Build_IFWI.bat /m /y MNW2 Debug
```

Once all the code and tools are downloaded and installed, only the following
commands are required to setup the environment.  Run these from the same
directory used to install the source and binaries.

```
set PYTHON_HOME=c:\Python27

set WORKSPACE=%CD%
set EDK_TOOLS_PATH=%WORKSPACE%\edk2\BaseTools
set EDK_TOOLS_BIN=%EDK_TOOLS_PATH%\BinWrappers\WindowsLike
set PACKAGES_PATH=%WORKSPACE%\edk2;%WORKSPACE%\Vlv2Binaries
path=%path%;%EDK_TOOLS_PATH%\Bin\Win32;%WORKSPACE%\openssl-1.0.2o-x64_86-win64
set NASM_PREFIX=%WORKSPACE%\nasm-2.13.03\

cd %WORKSPACE%\edk2

call edkSetup.bat Rebuild
```

Once the environment is setup, the MinnowBoard MAX firmware and capsules can be
rebuilt using the following commands.

* Build Debug Image

```
cd Vlv2TbltDevicePkg
Build_IFWI.bat /m /y MNW2 Debug
```

* Build Release Image

```
cd Vlv2TbltDevicePkg
Build_IFWI.bat /m /y MNW2 Release
```

The generated firmware image is the newest `.bin` file in `edk2/Vlv2TbltDevicePkg/Stitch`.
The file is in the form `MNW2MAX1.X64.0084.D01.<DATE>.bin`.

The CapsuleApp and generated UEFI Capsules are in `Build/Vlv2TbltDevicePkg/Capsules`

# Use DediProg to update FLASH image on a MinnowBoard MAX Target

# Update MinnowBoard MAX Firmware from UEFI Capsules

* Copy the `Build/Vlv2TbltDevicePkg/Capsules` directory to a USB FLASH drive
* Connect USB FLASH Drive to MinnowBoard MAX
* Boot MinnowBoard MAX to the Boot Manager
* Boot the `EFI Internal Shell` boot option
* Mount the USB FLASH Drive (usually `FS1`)
* Use `cd` command to go to `Capsules/TestCert` directory
* Run the following command to apply all four capsules

```
CapsuleApp.efi Red.cap Green.cap Blue.cap MinnowMax.cap
```

* The MinnowBoard MAX should reboot and the four capsules are applied in the
  order listed.  The progress bar matches the color name of the capsule.
  MinnowMax.cap uses the color purple.  Once all capsules are processed, the
  MinnowBoard MAX should reboot again using the new firmware images.

# Generate and Test a UX BitMap Capsule

* Use bitmap editor to generate a BMP file.  Recommend resolution of 600 wide
  by 100 tell and either 24 or 32 bits per pixel.
* Save BMP file to USB FLASH drive
* Use CapsuleApp.efi to convert BMP file to a UX Capsule

```
CapsuleApp.efi -G MyImage.bmp -O MyImage.cap
```

* When updating firmware using capsules, add UX capsule to the list of capsules
  passed into CapsuleApp.efi.

```
CapsuleApp.efi MyImage.cap Red.cap Green.cap Blue.cap MinnowMax.cap
```

* When the capsules are processed the UX bitmap image should be displayed at the
  bottom of the screen.

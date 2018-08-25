# @file
#   Linux script file to generate UEFI capsules for system firmware and
#   firmware for sample devices
#
# Copyright (c) 2018, Intel Corporation. All rights reserved.<BR>
# This program and the accompanying materials
# are licensed and made available under the terms and conditions of the BSD License
# which accompanies this distribution.  The full text of the license may be found at
# http://opensource.org/licenses/bsd-license.php
#
# THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
# WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
#

cd $(dirname $0)

rm -R $WORKSPACE/Build/Vlv2TbltDevicePkg/Capsules
mkdir $WORKSPACE/Build/Vlv2TbltDevicePkg/Capsules
mkdir $WORKSPACE/Build/Vlv2TbltDevicePkg/Capsules/SampleDevelopment
mkdir $WORKSPACE/Build/Vlv2TbltDevicePkg/Capsules/NewCert
mkdir $WORKSPACE/Build/Vlv2TbltDevicePkg/Capsules/TestCert
cp $WORKSPACE/Build/Vlv2TbltDevicePkg/DEBUG_GCC49/X64/CapsuleApp.efi $WORKSPACE/Build/Vlv2TbltDevicePkg/Capsules/SampleDevelopment/CapsuleApp.efi
cp $WORKSPACE/Build/Vlv2TbltDevicePkg/RELEASE_GCC49/X64/CapsuleApp.efi $WORKSPACE/Build/Vlv2TbltDevicePkg/Capsules/SampleDevelopment/CapsuleAppRelease.efi
cp $WORKSPACE/Build/Vlv2TbltDevicePkg/DEBUG_GCC49/X64/CapsuleApp.efi $WORKSPACE/Build/Vlv2TbltDevicePkg/Capsules/NewCert/CapsuleApp.efi
cp $WORKSPACE/Build/Vlv2TbltDevicePkg/RELEASE_GCC49/X64/CapsuleApp.efi $WORKSPACE/Build/Vlv2TbltDevicePkg/Capsules/NewCert/CapsuleAppRelease.efi
cp $WORKSPACE/Build/Vlv2TbltDevicePkg/DEBUG_GCC49/X64/CapsuleApp.efi $WORKSPACE/Build/Vlv2TbltDevicePkg/Capsules/TestCert/CapsuleApp.efi
cp $WORKSPACE/Build/Vlv2TbltDevicePkg/RELEASE_GCC49/X64/CapsuleApp.efi $WORKSPACE/Build/Vlv2TbltDevicePkg/Capsules/TestCert/CapsuleAppRelease.efi

. GenCapsuleMinnowMax.sh
. GenCapsuleMinnowMaxRelease.sh
. GenCapsuleSampleColor.sh Blue  149DA854-7D19-4FAA-A91E-862EA1324BE6
. GenCapsuleSampleColor.sh Green 79179BFD-704D-4C90-9E02-0AB8D968C18A
. GenCapsuleSampleColor.sh Red   72E2945A-00DA-448E-9AA7-075AD840F9D4

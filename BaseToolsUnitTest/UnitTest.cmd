@REM @file
@REM Unit test for the GenerateCapsule tool.  This following steps are
@REM performed with signtool with a SAMPLE_DEVELOPMENT.pfx key and OpenSsl with
@REM EDK II test key.  The test is repeated with verbose enabled and disable.
@REM   * Create a payload file with string 'Hello'
@REM   * Encode payload into a UEFI Capsule.
@REM   * Dump information from the UEFI Capsule.
@REM   * Decode payload from the UEFI Capsule.
@REM   * Verify that the decoded payload matches the original payload.
@REM
@REM See the following branch and tool tp create SAMPLE_DEVELOPMENT.pfx
@REM   https://github.com/Microsoft/MS_UEFI/tree/share/MsCapsuleSupport
@REM   https://github.com/Microsoft/MS_UEFI/blob/share/MsCapsuleSupport/MsSampleFmpDevicePkg/Tools/MakeCerts.bat
@REM
@REM Copyright (c) 2018, Intel Corporation. All rights reserved.<BR>
@REM
@REM This program and the accompanying materials are licensed and made available
@REM under the terms and conditions of the BSD License which accompanies this
@REM distribution.  The full text of the license may be found at:
@REM   http://opensource.org/licenses/bsd-license.php
@REM
@REM THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
@REM WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR
@REM IMPLIED.
@REM

echo Hello > a.a

call GenerateCapsule a.a -e -o b.b --version 2 --lsv 1 --guid F0FDCE7B-022E-4D30-87FA-0088CCA4CB5A -v ^
--pfx-file SAMPLE_DEVELOPMENT.pfx ^
--signing-tool-path="c:\Program Files (x86)\Windows Kits\8.1\bin\x86"

call GenerateCapsule --dump-info b.b

call GenerateCapsule b.b -d -o c.c  -v ^
--pfx-file SAMPLE_DEVELOPMENT.pfx ^
--signing-tool-path="c:\Program Files (x86)\Windows Kits\8.1\bin\x86"

fc a.a c.c


call GenerateCapsule a.a -e -o b.b --version 2 --lsv 1 --guid F0FDCE7B-022E-4D30-87FA-0088CCA4CB5A -v ^
--signer-private-cert=%WORKSPACE%\edk2\BaseTools\Source\Python\Pkcs7Sign\TestCert.pem ^
--other-public-cert=%WORKSPACE%\edk2\BaseTools\Source\Python\Pkcs7Sign\TestSub.pub.pem ^
--trusted-public-cert=%WORKSPACE%\edk2\BaseTools\Source\Python\Pkcs7Sign\TestRoot.pub.pem ^
--signing-tool-path=c:\OpenSSL-Win32\bin

call GenerateCapsule --dump-info b.b

call GenerateCapsule b.b -d -o c.c  -v ^
--signer-private-cert=%WORKSPACE%\edk2\BaseTools\Source\Python\Pkcs7Sign\TestCert.pem ^
--other-public-cert=%WORKSPACE%\edk2\BaseTools\Source\Python\Pkcs7Sign\TestSub.pub.pem ^
--trusted-public-cert=%WORKSPACE%\edk2\BaseTools\Source\Python\Pkcs7Sign\TestRoot.pub.pem ^
--signing-tool-path=c:\OpenSSL-Win32\bin

fc a.a c.c


call GenerateCapsule a.a -e -o b.b --version 2 --lsv 1 --guid F0FDCE7B-022E-4D30-87FA-0088CCA4CB5A ^
--pfx-file SAMPLE_DEVELOPMENT.pfx ^
--signing-tool-path="c:\Program Files (x86)\Windows Kits\8.1\bin\x86"

call GenerateCapsule b.b -d -o c.c  ^
--pfx-file SAMPLE_DEVELOPMENT.pfx ^
--signing-tool-path="c:\Program Files (x86)\Windows Kits\8.1\bin\x86"

fc a.a c.c

call GenerateCapsule a.a -e -o b.b --version 2 --lsv 1 --guid F0FDCE7B-022E-4D30-87FA-0088CCA4CB5A ^
--signer-private-cert=%WORKSPACE%\edk2\BaseTools\Source\Python\Pkcs7Sign\TestCert.pem ^
--other-public-cert=%WORKSPACE%\edk2\BaseTools\Source\Python\Pkcs7Sign\TestSub.pub.pem ^
--trusted-public-cert=%WORKSPACE%\edk2\BaseTools\Source\Python\Pkcs7Sign\TestRoot.pub.pem ^
--signing-tool-path=c:\OpenSSL-Win32\bin

call GenerateCapsule b.b -d -o c.c  ^
--signer-private-cert=%WORKSPACE%\edk2\BaseTools\Source\Python\Pkcs7Sign\TestCert.pem ^
--other-public-cert=%WORKSPACE%\edk2\BaseTools\Source\Python\Pkcs7Sign\TestSub.pub.pem ^
--trusted-public-cert=%WORKSPACE%\edk2\BaseTools\Source\Python\Pkcs7Sign\TestRoot.pub.pem ^
--signing-tool-path=c:\OpenSSL-Win32\bin

fc a.a c.c

erase a.a
erase b.b
erase c.c

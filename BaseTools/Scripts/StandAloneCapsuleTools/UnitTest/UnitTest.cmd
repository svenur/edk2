echo Hello > a.a

%WORKSPACE%\edk2\BaseTools\Scripts\StandAloneCapsuleTools\GenerateCapsule.py a.a -e -o b.b --version 2 --lsv 1 --guid F0FDCE7B-022E-4D30-87FA-0088CCA4CB5A -v ^
--pfx-file SAMPLE_DEVELOPMENT.pfx ^
--signing-tool-path="c:\Program Files (x86)\Windows Kits\8.1\bin\x86"

%WORKSPACE%\edk2\BaseTools\Scripts\StandAloneCapsuleTools\GenerateCapsule.py --dump-info b.b

%WORKSPACE%\edk2\BaseTools\Scripts\StandAloneCapsuleTools\GenerateCapsule.py b.b -d -o c.c  -v ^
--pfx-file SAMPLE_DEVELOPMENT.pfx ^
--signing-tool-path="c:\Program Files (x86)\Windows Kits\8.1\bin\x86"

fc a.a c.c


%WORKSPACE%\edk2\BaseTools\Scripts\StandAloneCapsuleTools\GenerateCapsule.py a.a -e -o b.b --version 2 --lsv 1 --guid F0FDCE7B-022E-4D30-87FA-0088CCA4CB5A -v ^
--signer-private-cert=%WORKSPACE%\edk2\BaseTools\Source\Python\Pkcs7Sign\TestCert.pem ^
--other-public-cert=%WORKSPACE%\edk2\BaseTools\Source\Python\Pkcs7Sign\TestSub.pub.pem ^
--trusted-public-cert=%WORKSPACE%\edk2\BaseTools\Source\Python\Pkcs7Sign\TestRoot.pub.pem ^
--signing-tool-path=c:\OpenSSL-Win32\bin

%WORKSPACE%\edk2\BaseTools\Scripts\StandAloneCapsuleTools\GenerateCapsule.py --dump-info b.b

%WORKSPACE%\edk2\BaseTools\Scripts\StandAloneCapsuleTools\GenerateCapsule.py b.b -d -o c.c  -v ^
--signer-private-cert=%WORKSPACE%\edk2\BaseTools\Source\Python\Pkcs7Sign\TestCert.pem ^
--other-public-cert=%WORKSPACE%\edk2\BaseTools\Source\Python\Pkcs7Sign\TestSub.pub.pem ^
--trusted-public-cert=%WORKSPACE%\edk2\BaseTools\Source\Python\Pkcs7Sign\TestRoot.pub.pem ^
--signing-tool-path=c:\OpenSSL-Win32\bin

fc a.a c.c


%WORKSPACE%\edk2\BaseTools\Scripts\StandAloneCapsuleTools\GenerateCapsule.py a.a -e -o b.b --version 2 --lsv 1 --guid F0FDCE7B-022E-4D30-87FA-0088CCA4CB5A ^
--pfx-file SAMPLE_DEVELOPMENT.pfx ^
--signing-tool-path="c:\Program Files (x86)\Windows Kits\8.1\bin\x86"

%WORKSPACE%\edk2\BaseTools\Scripts\StandAloneCapsuleTools\GenerateCapsule.py b.b -d -o c.c  ^
--pfx-file SAMPLE_DEVELOPMENT.pfx ^
--signing-tool-path="c:\Program Files (x86)\Windows Kits\8.1\bin\x86"

fc a.a c.c

%WORKSPACE%\edk2\BaseTools\Scripts\StandAloneCapsuleTools\GenerateCapsule.py a.a -e -o b.b --version 2 --lsv 1 --guid F0FDCE7B-022E-4D30-87FA-0088CCA4CB5A ^
--signer-private-cert=%WORKSPACE%\edk2\BaseTools\Source\Python\Pkcs7Sign\TestCert.pem ^
--other-public-cert=%WORKSPACE%\edk2\BaseTools\Source\Python\Pkcs7Sign\TestSub.pub.pem ^
--trusted-public-cert=%WORKSPACE%\edk2\BaseTools\Source\Python\Pkcs7Sign\TestRoot.pub.pem ^
--signing-tool-path=c:\OpenSSL-Win32\bin

%WORKSPACE%\edk2\BaseTools\Scripts\StandAloneCapsuleTools\GenerateCapsule.py b.b -d -o c.c  ^
--signer-private-cert=%WORKSPACE%\edk2\BaseTools\Source\Python\Pkcs7Sign\TestCert.pem ^
--other-public-cert=%WORKSPACE%\edk2\BaseTools\Source\Python\Pkcs7Sign\TestSub.pub.pem ^
--trusted-public-cert=%WORKSPACE%\edk2\BaseTools\Source\Python\Pkcs7Sign\TestRoot.pub.pem ^
--signing-tool-path=c:\OpenSSL-Win32\bin

fc a.a c.c

erase a.a
erase b.b
erase c.c

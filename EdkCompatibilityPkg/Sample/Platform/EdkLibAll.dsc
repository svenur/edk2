#/*++
#
# Copyright (c) 2004 - 2007, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
# 
#--*/
#
# EDK Common Library
#

#
# Libraries common to PEI and DXE
#
$(EDK_PREFIX)Foundation\Efi\Guid\EfiGuidLib.inf
$(EDK_PREFIX)Foundation\Framework\Guid\EdkFrameworkGuidLib.inf
$(EDK_PREFIX)Foundation\Guid\EdkGuidLib.inf
$(EDK_PREFIX)Foundation\Library\EfiCommonLib\EfiCommonLib.inf
$(EDK_PREFIX)Foundation\Cpu\Pentium\CpuIA32Lib\CpuIA32Lib.inf
$(EDK_PREFIX)Foundation\Cpu\Itanium\CpuIA64Lib\CpuIA64Lib.inf
$(EDK_PREFIX)Foundation\Library\CustomizedDecompress\CustomizedDecompress.inf
$(EDK_PREFIX)Foundation\Library\CompilerStub\CompilerStubLib.inf

#
# PEI libraries
#
$(EDK_PREFIX)Foundation\Framework\Ppi\EdkFrameworkPpiLib.inf
$(EDK_PREFIX)Foundation\Ppi\EdkPpiLib.inf
$(EDK_PREFIX)Foundation\Library\Pei\PeiLib\PeiLib.inf
$(EDK_PREFIX)Foundation\Library\Pei\Hob\PeiHobLib.inf

#
# DXE libraries
#
$(EDK_PREFIX)Foundation\Core\Dxe\ArchProtocol\ArchProtocolLib.inf
$(EDK_PREFIX)Foundation\Efi\Protocol\EfiProtocolLib.inf
$(EDK_PREFIX)Foundation\Framework\Protocol\EdkFrameworkProtocolLib.inf
$(EDK_PREFIX)Foundation\Protocol\EdkProtocolLib.inf
$(EDK_PREFIX)Foundation\Library\Dxe\Hob\HobLib.inf
$(EDK_PREFIX)Foundation\Library\Dxe\EfiDriverLib\EfiDriverLib.inf
$(EDK_PREFIX)Foundation\Library\RuntimeDxe\EfiRuntimeLib\EfiRuntimeLib.inf
$(EDK_PREFIX)Foundation\Library\Dxe\Graphics\Graphics.inf
$(EDK_PREFIX)Foundation\Library\Dxe\EfiIfrSupportLib\EfiIfrSupportLib.inf
$(EDK_PREFIX)Foundation\Library\Dxe\UefiEfiIfrSupportLib\UefiEfiIfrSupportLib.inf
$(EDK_PREFIX)Foundation\Library\Dxe\Print\PrintLib.inf
$(EDK_PREFIX)Foundation\Library\Dxe\EfiScriptLib\EfiScriptLib.inf
$(EDK_PREFIX)Foundation\Library\Dxe\EfiUiLib\EfiUiLib.inf

#
# Print/Graphics Library consume SetupBrowser Print Protocol
#
$(EDK_PREFIX)Foundation\Library\Dxe\PrintLite\PrintLib.inf
$(EDK_PREFIX)Foundation\Library\Dxe\GraphicsLite\Graphics.inf

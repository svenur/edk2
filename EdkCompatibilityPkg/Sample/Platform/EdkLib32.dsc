#/*++
#
# Copyright (c) 2004 - 2007, Intel Corporation. All rights reserved.<BR>
# SPDX-License-Identifier: BSD-2-Clause-Patent
# 
#--*/
#
# EDK Common Library for PEI usage (32bit)
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

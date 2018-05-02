## @file
# Add an FMP Capsule Header to a payload binary.
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

'''
GenFmpCapsuleHeader
'''

import sys
import argparse
import uuid
from FmpCapsuleHeader import FmpCapsuleHeaderClass
from FmpCapsuleHeader import FmpCapsuleImageHeaderClass

#
# Globals for help information
#
__prog__        = 'GenFmpCapsuleHeader'
__copyright__   = 'Copyright (c) 2018, Intel Corporation. All rights reserved.'
__description__ = 'Add an FMP Capsule Header to a payload binary.\n'

if __name__ == '__main__':
    def convert_arg_line_to_args(arg_line):
        for arg in arg_line.split():
            if not arg.strip():
                continue
            yield arg

    def ValidateUnsignedInteger (Argument):
        try:
            Value = int (Argument, 0)
        except:
            Message = '{Argument} is not a valid integer value.'.format (Argument = Argument)
            raise argparse.ArgumentTypeError (Message)
        if Value < 0:
            Message = '{Argument} is a negative value.'.format (Argument = Argument)
            raise argparse.ArgumentTypeError (Message)
        return Value

    def ValidateRegistryFormatGuid (Argument):
        try:
            Value = uuid.UUID (Argument)
        except:
            Message = '{Argument} is not a valid registry format GUID value.'.format (Argument = Argument)
            raise argparse.ArgumentTypeError (Message)
        return Value

    #
    # Create command line argument parser object
    #
    parser = argparse.ArgumentParser (
                        prog = __prog__,
                        description = __description__ + __copyright__,
                        conflict_handler = 'resolve',
                        fromfile_prefix_chars = '@'
                        )
    parser.convert_arg_line_to_args = convert_arg_line_to_args

    #
    # Add input and output file arguments
    #
    parser.add_argument ("-i", "--input", dest = 'InputFile', type = argparse.FileType ('rb'), action = 'append',
                         help = "Input binary payload filename.")
    parser.add_argument ("-o", "--output", dest = 'OutputFile', type = argparse.FileType ('wb'),
                         help = "Output filename.")
    #
    # Add group for -e and -d flags that are mutually exclusive and required
    #
    group = parser.add_mutually_exclusive_group (required = True)
    group.add_argument ("-e", "--encode", dest = 'Encode', action = "store_true",
                        help = "Encode file")
    group.add_argument ("-d", "--decode", dest = 'Decode', action = "store_true",
                        help = "Decode file")
    group.add_argument ("--dump-info", dest = 'DumpInfo', action = "store_true",
                        help = "Display FMP Payload Header information")
    #
    # Add optional arguments for this command
    #
    parser.add_argument("--embedded-driver", dest = 'EmbeddedDriver', type = argparse.FileType('rb'), action = 'append',
                        help = "Embedded driver filename.  This option may be repeated to provide multiple drivers.")

    parser.add_argument ("--guid", dest = 'Guid', type = ValidateRegistryFormatGuid, action = 'append',
                         help = "The FMP/ESRT GUID in registry format.  Always required.")
    parser.add_argument ("--vendor-code-bytes", dest = 'VendorCodeBytesFile', type = argparse.FileType ('rb'), action = 'append',
                         help = "Vendor Code Bytes filename.")
    parser.add_argument ("--hardware-instance", dest = 'HardwareInstance', type = ValidateUnsignedInteger, action = 'append',
                         help = "The 64-bit hardware instance")

    group = parser.add_mutually_exclusive_group ()
    group.add_argument ("--embedded-driver-index", dest = 'EmbeddedDriverIndex', type = ValidateUnsignedInteger,
                        help = "The index of the embedded driver to decode.")
    group.add_argument ("--payload-index", dest = 'PayloadIndex', type = ValidateUnsignedInteger,
                        help = "The index of the payload to decode.")
    group.add_argument ("--vendor-code-bytes-index", dest = 'VendorCodeBytesIndex', type = ValidateUnsignedInteger,
                        help = "The index of the vendor code bytes to decode.")

    #
    # Add optional arguments common to all commands
    #
    parser.add_argument ("-v", "--verbose", dest = 'Verbose', action = "store_true",
                         help = "Increase output messages")
    parser.add_argument ("-q", "--quiet", dest = 'Quiet', action = "store_true",
                         help = "Reduce output messages")
    parser.add_argument ("--debug", dest = 'Debug', type = int, metavar = '[0-9]',
                         choices = range (0, 10), default = 0,
                         help = "Set debug level")

    #
    # Parse command line arguments
    #
    args = parser.parse_args ()

    #
    # Perform additional argument verification
    #
    if args.Encode:
        if len (args.InputFile) != len (args.Guid):
            parser.error ('the following arguments are required for every input file: --guid')
        if len (args.InputFile) > 1:
            if args.VendorCodeBytesFile is not None:
                if len (args.InputFile) != len (args.VendorCodeBytesFile):
                    parser.error ('the following arguments are required for every input file: --vendor-code-bytes')
            if args.HardwareInstance is not None:
                if len (args.InputFile) != len (args.HardwareInstance):
                    print(args.HardwareInstance)
                    parser.error ('the following arguments are required for every input file: --hardware-instance')

    if args.Decode and len (args.InputFile) > 1:
        parser.error ('decoding multiple input files is not supported')

    if not args.DumpInfo and args.OutputFile is None:
        parser.error ('the following arguments are required: --output')

    if args.DumpInfo and args.OutputFile is not None:
        parser.error ('the following arguments are not required: --output')

    #
    # Read input files
    #
    InputFiles = []
    for File in args.InputFile:
        try:
            if args.Verbose:
                print ('Read input file {File}'.format (File = File.name))
            InputFiles.append (File.read ())
            File.close ()
        except:
            print ('GenFmpCapsuleHeader: error: can not read input file {File}'.format (File = File.name))
            sys.exit (1)

    VendorCodeBytes = []
    if args.VendorCodeBytesFile is not None:
        for File in args.VendorCodeBytesFile:
            try:
                if args.Verbose:
                    print ('Read vendor code bytes file {File}'.format (File = File.name))
                VendorCodeBytes.append (File.read ())
                File.close ()
            except:
                print ('GenFmpCapsuleHeader: error: can not read vendor code bytes file {File}'.format (File = File.name))
                sys.exit (1)

    EmbeddedDrivers = []
    if args.EmbeddedDriver is not None:
        for File in args.EmbeddedDriver:
            try:
                if args.Verbose:
                    print ('Read embedded driver file {File}'.format (File = File.name))
                EmbeddedDrivers.append (File.read ())
                File.close ()
            except:
                print ('GenFmpCapsuleHeader: error: can not read embedded driver file {File}'.format (File = File.name))
                sys.exit (1)

    #
    # Create a FmpCapsuleHeader object
    #
    FmpCapsuleHeader = FmpCapsuleHeaderClass ()

    if args.Encode:
        try:
            for Driver in EmbeddedDrivers:
                FmpCapsuleHeader.AddEmbeddedDriver (Driver)
            for Index in range (0, len(InputFiles)):
                VendorCode = b''
                if len(VendorCodeBytes) > 0:
                    VendorCode = VendorCodeBytes[Index]
                HardwareInstance = 0
                if args.HardwareInstance is not None:
                    HardwareInstance = args.HardwareInstance[Index]
                FmpCapsuleHeader.AddPayload (args.Guid[Index], InputFiles[Index], VendorCode, HardwareInstance)
            Result = FmpCapsuleHeader.Encode ()
            if args.Verbose:
                FmpCapsuleHeader.DumpInfo ()
        except:
            print ('GenFmpCapsuleHeader: error: can not encode binary input file {File}'.format (File = args.InputFile.name))
            sys.exit (1)
    elif args.Decode:
        Buffer = InputFiles[0]
        try:
            FmpCapsuleHeader.Decode (Buffer)
        except:
            print ('GenFmpCapsuleHeader: error: can not decode binary input file {File}'.format (File = args.InputFile[0].name))
            sys.exit (1)

        if args.PayloadIndex is not None:
            try:
                Result = FmpCapsuleHeader.GetFmpCapsuleImageHeader (args.PayloadIndex).Payload
            except:
                print ('GenFmpCapsuleHeader: error: payload index {Index} too large'.format (Index = args.PayloadIndex))
                sys.exit (1)
        elif args.VendorCodeBytesIndex is not None:
            try:
                Result = FmpCapsuleHeader.GetFmpCapsuleImageHeader (args.VendorCodeBytesIndex).VendorCodeBytes
            except:
                print ('GenFmpCapsuleHeader: error: vendor code bytes index {Index} too large'.format (Index = args.VendorCodeBytesIndex))
                sys.exit (1)
        elif args.EmbeddedDriverIndex is not None:
            try:
                Result = FmpCapsuleHeader.GetEmbeddedDriver (args.EmbeddedDriverIndex)
            except:
                print ('GenFmpCapsuleHeader: error: embedded driver index {Index} too large'.format (Index = args.EmbeddedDriverIndex))
                sys.exit (1)
        else:
            try:
                Result = FmpCapsuleHeader.GetFmpCapsuleImageHeader (0).Payload
            except:
                print ('GenFmpCapsuleHeader: error: payload index {Index} too large'.format (Index = 0))
                sys.exit (1)
        if args.Verbose:
            FmpCapsuleHeader.DumpInfo ()
    elif args.DumpInfo:
        try:
            for Buffer in InputFiles:
                FmpCapsuleHeader.Decode (Buffer)
                FmpCapsuleHeader.DumpInfo ()
        except:
            print ('GenFmpCapsuleHeader: error: can not decode binary input file {File}'.format (File = args.InputFile.name))
            sys.exit (1)
    else:
        print ('GenFmpCapsuleHeader: error: invalid options')
        sys.exit (1)

    #
    # Write binary output file
    #
    if args.OutputFile is not None:
        try:
            if args.Verbose:
                print ('Write binary output file {File}'.format (File = args.OutputFile.name))
            args.OutputFile.write (Result)
            args.OutputFile.close ()
        except:
            print ('GenFmpPayloadHeader: error: can not write binary output file {File}'.format (File = args.OutputFile.name))
            sys.exit (1)

    if args.Verbose:
        print ('Success')

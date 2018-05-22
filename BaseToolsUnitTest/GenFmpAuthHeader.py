## @file
# Add a EFI_FIRMWARE_IMAGE_AUTHENTICATION Header with certificate data and
# payload data.
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
GenFmpAuthHeader
'''

import sys
import argparse
import uuid
from Common.Uefi.Capsule.FmpAuthHeader import FmpAuthHeaderClass

#
# Globals for help information
#
__prog__        = 'GenFmpAuthHeader'
__copyright__   = 'Copyright (c) 2018, Intel Corporation. All rights reserved.'
__description__ = 'Add a EFI_FIRMWARE_IMAGE_AUTHENTICATION Header with certificate data and payload data\n'

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
    parser.add_argument ("InputFile",  type = argparse.FileType ('rb'),
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
    parser.add_argument ("--monotonic-count", dest = 'MonotonicCount', type = ValidateUnsignedInteger, default = 0x0000000000000000,
                         help = "64-bit monoitonic count value in header.  Default is 0x0000000000000000.")
    parser.add_argument ("--cert-data", dest = 'CertData', type = argparse.FileType ('rb'),
                         help = "Certificate data filename.")

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
    if not args.DumpInfo and args.OutputFile is None:
        parser.error ('the following arguments are required for all commands except --dump-info: --output')

    if args.Encode and args.CertData is None:
        parser.error ('the following arguments are required for --encode: --cert-data')

    #
    # Read binary input files
    #
    try:
        if args.Verbose:
            print ('Read binary input file {File}'.format (File = args.InputFile.name))
        Buffer = args.InputFile.read ()
        args.InputFile.close ()
    except:
        print ('GenFmpAuthHeader: error: can not read binary input file {File}'.format (File = args.InputFile.name))
        sys.exit (1)

    if args.CertData is not None:
        try:
            if args.Verbose:
                print ('Read cert data file {File}'.format (File = args.CertData.name))
            CertData = args.CertData.read ()
            args.CertData.close()
        except:
            print ('GenFmpAuthHeader: error: can not read cert data file {File}'.format (File = args.CertData.name))
            sys.exit (1)

    #
    # Create a FmpAuthHeader object
    #
    FmpAuthHeader = FmpAuthHeaderClass ()

    if args.Encode:
        try:
            FmpAuthHeader.MonotonicCount = args.MonotonicCount
            FmpAuthHeader.CertData       = CertData
            FmpAuthHeader.Payload        = Buffer
            Result = FmpAuthHeader.Encode ()
            if args.Verbose:
                FmpAuthHeader.DumpInfo ()
        except:
            print ('GenFmpAuthHeader: error: can not encode binary input file {File}'.format (File = args.InputFile.name))
            sys.exit (1)
    elif args.Decode:
        try:
            Result = FmpAuthHeader.Decode (Buffer)
            if args.Verbose:
                FmpAuthHeader.DumpInfo ()
        except:
            print ('GenFmpAuthHeader: error: can not decode binary input file {File}'.format (File = args.InputFile.name))
            sys.exit (1)
    elif args.DumpInfo:
        try:
            FmpAuthHeader.Decode (Buffer)
            FmpAuthHeader.DumpInfo ()
        except:
            print ('GenFmpAuthHeader: error: can not decode binary input file {File}'.format (File = args.InputFile.name))
            sys.exit (1)
    else:
        print ('GenFmpAuthHeader: error: invalid options')
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
            print ('GenFmpAuthHeader: error: can not write binary output file {File}'.format (File = args.OutputFile.name))
            sys.exit (1)

    if args.Verbose:
        print ('Success')

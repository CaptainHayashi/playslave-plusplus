// This file is part of Playslave-C++.
// Playslave-C++ is licenced under the MIT license: see LICENSE.txt.

/**
 * @file
 * Constant human-readable messages used within Playslave.
 * @see constants.h
 */

#ifndef PS_MESSAGES_H
#define PS_MESSAGES_H

#include <string>

/// Message shown when the CommandHandler receives an invalid command.
const std::string MSG_CMD_INVALID = "Bad command or file name";

/// Message shown when the AudioDecoder fails to decode a file.
const std::string MSG_DECODE_FAIL = "Decoding failure";

/// Message shown when the AudioDecoder fails to find an audio stream.
const std::string MSG_DECODE_NOAUDIO = "This doesn't seem to be an audio file";

/// Message shown when the AudioDecoder fails to initialise a stream.
const std::string MSG_DECODE_NOSTREAM = "Couldn't acquire stream";

/// Message shown when the AudioDecoder fails to initialise a codec.
const std::string MSG_DECODE_NOCODEC = "Couldn't acquire codec";

/// Message shown when a bad sample rate is found.
const std::string MSG_DECODE_BADRATE = "Unsupported or invalid sample rate";

/// Message shown when an attempt to seek fails.
const std::string MSG_SEEK_FAIL = "Seek failed";

/// Message shown when an incorrect device ID is provided.
const std::string MSG_DEV_BADID = "Incorrect device ID";

/// Message shown when no device ID is provided.
const std::string MSG_DEV_NOID = "Expected a device ID as an argument";

/// Message shown when there is an error writing to the ring buffer.
const std::string MSG_OUTPUT_RINGWRITE = "Ring buffer write error";

/// Message shown when there is an error initialising the ring buffer.
const std::string MSG_OUTPUT_RINGINIT = "Ring buffer init error";

/// Message shown when a client connects to Playslave.
const std::string MSG_OHAI = "URY playslave at your service";

/// Message shown when a client disconnects from Playslave.
const std::string MSG_TTFN = "Sleep now";

#endif // PS_MESSAGES_H

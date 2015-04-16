//------------------------------------------------------------------------------
/*
    This file is part of rippled: https://github.com/ripple/rippled
    Copyright (c) 2012, 2013 Ripple Labs Inc.

    Permission to use, copy, modify, and/or distribute this software for any
    purpose  with  or without fee is hereby granted, provided that the above
    copyright notice and this permission notice appear in all copies.

    THE  SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
    WITH  REGARD  TO  THIS  SOFTWARE  INCLUDING  ALL  IMPLIED  WARRANTIES  OF
    MERCHANTABILITY  AND  FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
    ANY  SPECIAL ,  DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
    WHATSOEVER  RESULTING  FROM  LOSS  OF USE, DATA OR PROFITS, WHETHER IN AN
    ACTION  OF  CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/
//==============================================================================

#ifndef RIPPLED_RIPPLE_RPC_IMPL_WRITELEGACYJSON_H
#define RIPPLED_RIPPLE_RPC_IMPL_WRITELEGACYJSON_H

namespace ripple {
namespace RPC {

/** Writes a minimal representation of a Json value to an Output in O(n) time.

    Data is streamed right to the output, so only a marginal amount of memory is
    used.  This can be very important for a very large Json::Value.
 */
void writeJson (Json::Value const&, Output const&);

/** Return the minimal string representation of a Json::Value in O(n) time.

    This requires a memory allocation for the full size of the output.
    If possible, use write().
 */
std::string jsonAsString (Json::Value const&);

} // RPC
} // ripple

#endif

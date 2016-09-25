/*
 * Copyright (C) 2010 Google Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *     * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following disclaimer
 * in the documentation and/or other materials provided with the
 * distribution.
 *     * Neither the name of Google Inc. nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef WebDocumentType_h
#define WebDocumentType_h

#include "WebNode.h"

#if BLINK_IMPLEMENTATION
namespace WTF { template <typename T> class PassRefPtr; }
#endif

namespace blink {

class DocumentType;
class WebString;

// Provides readonly access to some properties of a DOM document type.
class WebDocumentType : public WebNode {
public:
    WebDocumentType() { }
    WebDocumentType(const WebDocumentType& e) : WebNode(e) { }

    WebDocumentType& operator=(const WebDocumentType& e)
    {
        WebNode::assign(e);
        return *this;
    }
    void assign(const WebDocumentType& e) { WebNode::assign(e); }

    BLINK_EXPORT WebString name() const;
#ifndef NOT_QB_SWITCH_CORE
    BLINK_EXPORT WebString publicId() const;
    BLINK_EXPORT WebString systemId() const;
#endif // NOT_QB_SWITCH_CORE

#if BLINK_IMPLEMENTATION
    WebDocumentType(const PassRefPtrWillBeRawPtr<DocumentType>&);
    WebDocumentType& operator=(const PassRefPtrWillBeRawPtr<DocumentType>&);
    operator PassRefPtrWillBeRawPtr<DocumentType>() const;
#endif
};

} // namespace blink

#endif
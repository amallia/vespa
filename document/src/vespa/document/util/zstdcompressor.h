// Copyright 2016 Yahoo Inc. Licensed under the terms of the Apache 2.0 license. See LICENSE in the project root.
#pragma once

#include "compressor.h"

namespace document {

class ZStdCompressor : public ICompressor
{
public:
    bool process(const CompressionConfig& config, const void * input, size_t inputLen, void * output, size_t & outputLen) override;
    bool unprocess(const void * input, size_t inputLen, void * output, size_t & outputLen) override;
    size_t adjustProcessLen(uint16_t options, size_t len)   const override;
    size_t adjustUnProcessLen(uint16_t options, size_t len) const override;
};

}


// Copyright (C) 2020-2021 Intel Corporation
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include <ngraph/pass/graph_rewrite.hpp>

namespace ArmPlugin {
namespace pass {

struct ConvertMatMulToFC: public ngraph::pass::MatcherPass {
public:
    ConvertMatMulToFC();
};
}  // namespace pass
}  // namespace ArmPlugin

// (c) Meta Platforms, Inc. and affiliates. Confidential and proprietary.

#pragma once

#include "fboss/lib/bsp/BspPlatformMapping.h"

namespace facebook {
namespace fboss {

class IceteaBspPlatformMapping : public BspPlatformMapping {
 public:
  IceteaBspPlatformMapping();
  explicit IceteaBspPlatformMapping(const std::string& platformMappingStr);
};

} // namespace fboss
} // namespace facebook

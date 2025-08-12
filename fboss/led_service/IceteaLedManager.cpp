// (c) Meta Platforms, Inc. and affiliates. Confidential and proprietary.

#include "fboss/led_service/IceteaLedManager.h"
#include "fboss/agent/platforms/common/icetea/IceteaPlatformMapping.h"
#include "fboss/lib/bsp/BspGenericSystemContainer.h"
#include "fboss/lib/bsp/icetea/IceteaBspPlatformMapping.h"

namespace facebook::fboss {

/*
 * IceteaLedManager ctor()
 *
 * IceteaLedManager constructor will create the LedManager object for
 * Icetea platform
 */
IceteaLedManager::IceteaLedManager() : BspLedManager() {
  init<IceteaBspPlatformMapping, IceteaPlatformMapping>();
  XLOG(INFO) << "Created Icetea BSP LED Manager";
}

} // namespace facebook::fboss

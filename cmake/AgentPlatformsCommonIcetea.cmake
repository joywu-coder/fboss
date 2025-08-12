# CMake to build libraries and binaries in fboss/agent/platforms/common/icetea

# In general, libraries and binaries in fboss/foo/bar are built by
# cmake/FooBar.cmake

add_library(icetea_platform_mapping
  fboss/agent/platforms/common/icetea/IceteaPlatformMapping.cpp
)

target_link_libraries(icetea_platform_mapping
  platform_mapping
)

# Install script for directory: C:/blender-git/goo-engine/extern

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/blender-git/build_windows_x64_vc16_Release/bin/${BUILD_TYPE}")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/blender-git/build_windows_x64_vc16_Release/extern/curve_fit_nd/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc16_Release/extern/rangetree/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc16_Release/extern/wcwidth/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc16_Release/extern/bullet2/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc16_Release/extern/draco/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc16_Release/extern/glew/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc16_Release/extern/lzo/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc16_Release/extern/lzma/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc16_Release/extern/clew/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc16_Release/extern/cuew/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc16_Release/extern/hipew/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc16_Release/extern/ceres/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc16_Release/extern/gflags/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc16_Release/extern/glog/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc16_Release/extern/audaspace/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc16_Release/extern/quadriflow/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc16_Release/extern/mantaflow/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc16_Release/extern/smaa_areatex/cmake_install.cmake")

endif()


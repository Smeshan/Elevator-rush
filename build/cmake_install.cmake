<<<<<<< HEAD
# Install script for directory: /home/smeshan/workspace/timers
=======
# Install script for directory: /home/smeshan/workspace/animations
>>>>>>> 6bb771e45190decd39b99884f258ab88a9b899ff

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
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

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
<<<<<<< HEAD
  include("/home/smeshan/workspace/timers/build/utils/cmake_install.cmake")
  include("/home/smeshan/workspace/timers/build/sdl_utils/cmake_install.cmake")
  include("/home/smeshan/workspace/timers/build/manager_utils/cmake_install.cmake")
=======
  include("/home/smeshan/workspace/animations/build/utils/cmake_install.cmake")
  include("/home/smeshan/workspace/animations/build/sdl_utils/cmake_install.cmake")
  include("/home/smeshan/workspace/animations/build/manager_utils/cmake_install.cmake")
>>>>>>> 6bb771e45190decd39b99884f258ab88a9b899ff

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
<<<<<<< HEAD
file(WRITE "/home/smeshan/workspace/timers/build/${CMAKE_INSTALL_MANIFEST}"
=======
file(WRITE "/home/smeshan/workspace/animations/build/${CMAKE_INSTALL_MANIFEST}"
>>>>>>> 6bb771e45190decd39b99884f258ab88a9b899ff
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")

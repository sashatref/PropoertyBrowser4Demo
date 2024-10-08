cmake_minimum_required(VERSION 3.20.0 FATAL_ERROR)
project(PropertyBrowser4Demo LANGUAGES CXX C VERSION 1.0.1)


set(BUILD_VERSION "1" CACHE STRING "Build version")
set(BUILD_STATIC OFF CACHE BOOL "Enable static build")

if(BUILD_STATIC)
    set(HelperLibrary_BUILD_STATIC ON)
    set(PropertyBrowser3_BUILD_STATIC ON)
    add_definitions(-DSTATIC)
endif()

find_package(Qt5 REQUIRED COMPONENTS Core Gui Widgets Network Xml PrintSupport)

include(3rdparty/cmake_modules/appFlags.cmake)

add_subdirectory(3rdparty)
add_subdirectory(App)

set(LINUX_DEPLOY_TOOL ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/deploy_tools/ubuntu/linuxdeployqt-continuous-x86_64.AppImage)

if(NOT BUILD_STATIC)
    deployTargets(
        TARGETS
        HelperLibrary
        PropertyBrowser4
        MAINTARGET
        PropertyBrowser4Demo
    )
else()
    deployTargets(
        TARGETS
        PropertyBrowser4Demo
        MAINTARGET
        PropertyBrowser4Demo
    )
endif()

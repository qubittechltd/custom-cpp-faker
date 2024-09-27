cmake_minimum_required(VERSION 3.22)
project(faker-cxx
        LANGUAGES CXX
        VERSION 2.0.0
        DESCRIPTION "C++ Faker library for generating fake (but realistic) data."
        HOMEPAGE_URL "https://github.com/cieslarmichal/faker-cxx")

include(cmake/CompilerWarnings.cmake)
include(CMakeDependentOption)

option(USE_SYSTEM_DEPENDENCIES "Use fmt and GTest from system" OFF)
option(BUILD_EXAMPLES "Build examples" OFF)
option(BUILD_TESTING "Build tests" ON)
option(CODE_COVERAGE "Build faker-cxx with coverage support" OFF)

SET(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if (MSVC)
    set(CMAKE_REQUIRED_FLAGS /std:c++20)
else()
    set(CMAKE_REQUIRED_FLAGS -std=c++20)
endif()
include(CheckCXXSourceCompiles)
check_cxx_source_compiles("#include <format>\nint main(){ auto var = std::format(\"{}\", \"Hello\"); return 0; }"
    HAS_STD_FORMAT)
if (NOT HAS_STD_FORMAT)
    message(STATUS "Compiler has no support for std::format. Need to use fmt library as dependency.")
endif()

cmake_dependent_option(USE_STD_FORMAT "Use std::format when available" ON "HAS_STD_FORMAT" OFF)

add_library(${PROJECT_NAME})
if(UNIX AND NOT APPLE)  # This covers Linux, including aarch64
    if(CMAKE_SYSTEM_PROCESSOR STREQUAL "aarch64")
        set(FMT_INCLUDE_DIR "/usr/include/fmt")
        set(FMT_LIBRARY "/usr/lib/aarch64-linux-gnu/libfmt.so")
    else()  # For other Linux architectures like x86_64
        set(FMT_INCLUDE_DIR "/usr/include/fmt")
        set(FMT_LIBRARY "/usr/lib/x86_64-linux-gnu/libfmt.so")
    endif()
elseif(APPLE)
    # For macOS, specify the appropriate include and library paths
    set(FMT_INCLUDE_DIR "/usr/local/include/fmt")
    set(FMT_LIBRARY "/usr/local/lib/libfmt.dylib")
elseif(WIN32)
    # For Windows, you might need to adjust paths based on your installation
    set(FMT_INCLUDE_DIR "C:/path/to/fmt/include")
    set(FMT_LIBRARY "C:/path/to/fmt/lib/fmt.lib")
endif()

if (USE_SYSTEM_DEPENDENCIES)
    find_package(fmt CONFIG REQUIRED)
elseif (NOT USE_STD_FORMAT)
    find_library(FMT_LIBRARY fmt)
    if (NOT FMT_LIBRARY)
        message(FATAL_ERROR "Could not find fmt library. Please, read the contribution guide.")
    endif()
    set(FMT_INCLUDE_DIR "${SOURCE_DIR}/externals/fmt/include")
endif ()

add_subdirectory(src)

if (CODE_COVERAGE)
    set(target_code_coverage_ALL 1)
    include("cmake/cmake-coverage.cmake")
    add_code_coverage_all_targets(EXCLUDE tests/*)
    target_code_coverage(${PROJECT_NAME} ALL)
endif ()

if (BUILD_TESTING)
    enable_testing()
    add_subdirectory(tests)
endif ()

if (BUILD_EXAMPLES)
    add_subdirectory(examples)
endif ()

cmake_minimum_required(VERSION 3.10.0)

project(my-advent-of-code CXX)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake) # Variable that stores link to cmake subdirectory

include(FetchContent) # Tool for external dependencies
include(AddTestTools) # Tools needed for unit testing

if (CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    FetchContent_Declare(
        project_options
        GIT_REPOSITORY  https://github.com/cpp-best-practices/project_options.git
        GIT_TAG         v0.26.1
    )
    FetchContent_MakeAvailable(project_options)
    include(${project_options_SOURCE_DIR}/Index.cmake)
    include(${project_options_SOURCE_DIR}/src/DynamicProjectOptions.cmake)

    set(ENABLE_CPPCHECK_DEVELOPER_DEFAULT OFF)

    dynamic_project_options(
        CLANG_WARNINGS
        GCC_WARNINGS
    )

    if (OPT_ENABLE_COVERAGE AND NOT CMAKE_CROSSCOMPILING)
        include(GenerateCodeCoverageReport)
    endif()
endif()


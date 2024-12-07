cmake_minimum_required(VERSION 3.25)

project(mcppga VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "Debug")
endif()

# add_compile_options(-Wall -Wextra -Wpedantic)

file(GLOB_RECURSE HEADERS "include/*/*.hpp" "include/*.hpp")
file(GLOB_RECURSE SOURCES "src/*/*.cpp" "src/*.cpp")

# add_library(${PROJECT_NAME} ${HEADERS} ${SOURCES})
add_library(${PROJECT_NAME} INTERFACE)

target_include_directories(${PROJECT_NAME} INTERFACE include)

# if(CMAKE_BUILD_TYPE STREQUAL "Debug")
#   target_compile_definitions(${PROJECT_NAME} PRIVATE DEBUG_MODE=1)
#   target_compile_options(${PROJECT_NAME} PRIVATE -Og -g3 -DDEBUG)
# elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
#   target_compile_options(${PROJECT_NAME} PRIVATE -O3 -flto -DNDEBUG)
# endif()

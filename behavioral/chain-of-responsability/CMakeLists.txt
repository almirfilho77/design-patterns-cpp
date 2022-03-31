cmake_minimum_required(VERSION 3.5)

project(ChainOfResponsability)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(INCLUDE_DIR    "${PROJECT_SOURCE_DIR}/inc")
set(SOURCES_DIR    "${PROJECT_SOURCE_DIR}/src")
set(BIN_DIR        "${PROJECT_SOURCE_DIR}/bin")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BIN_DIR})

include_directories(${INCLUDE_DIR})

file(GLOB SRCS "${SOURCES_DIR}/*.cpp")

add_executable(${PROJECT_NAME} ${SRCS})
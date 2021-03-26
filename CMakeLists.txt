cmake_minimum_required(VERSION 2.8.9)
project(ndn_simulator)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

# add_library(testStudent SHARED ${SOURCES} src/mainapp.cpp)


add_executable(ndnSim ${SOURCES})

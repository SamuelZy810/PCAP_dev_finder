# Requires latest cmake version 3.28
cmake_minimum_required(VERSION 3.28)

# Creating project
project(PCAP_dev_finder)

# Setting new module path for cmake files and adding packages
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR}/modules/)
find_package(PCAP REQUIRED)

# Creating executable file
add_executable(Finder
        src/main.cpp)

# Sets std c++ 20 standard for Finder
target_compile_features(Finder PUBLIC cxx_std_20)
# Sets executable name Finder for Finder
set_target_properties(Finder PROPERTIES OUTPUT_NAME "Finder")

# Uses 64 bit architecture
target_compile_options(Finder PRIVATE -m64)
# Uses static libraries rather than dynamic
target_link_options(Finder PRIVATE -static-libgcc -static-libstdc++)

target_include_directories(Finder PRIVATE ${PCAP_INCLUDE_DIR})
target_link_libraries(Finder ${PCAP_LIBRARY})

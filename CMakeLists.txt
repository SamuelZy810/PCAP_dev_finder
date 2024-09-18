cmake_minimum_required(VERSION 3.28)
project(Pr1)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/modules)
find_package(PCAP REQUIRED)

add_executable(Pr1
        src/main.cpp)

target_include_directories(Pr1 PRIVATE ${PCAP_INCLUDE_DIR})
target_link_libraries(Pr1 ${PCAP_LIBRARY})

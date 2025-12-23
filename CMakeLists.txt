cmake_minimum_required(VERSION 3.10)
project(chess)

set(CMAKE_CXX_STANDARD 17)

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

add_executable(chess main.cpp board.cpp zones.cpp)
target_link_libraries(chess sfml-graphics sfml-window sfml-system)

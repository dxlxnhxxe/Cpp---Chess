cmake_minimum_required(VERSION 3.16)
project(Chess)

set(CMAKE_CXX_STANDARD 17)

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

add_executable(Chess
        Chess/main.cpp
        Chess/Board.cpp
        Chess/Pieces.cpp
        Chess/Kings.cpp
        Chess/Pawns.cpp
        Chess/Knights.cpp
        Chess/Bishops.cpp
        Chess/Rooks.cpp
        Chess/Queens.cpp)

file(COPY Chess/assets DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

target_link_libraries(Chess sfml-graphics sfml-window sfml-system)

cmake_minimum_required(VERSION 3.0)
project(ZadClassKcpp)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

set(SOURCES
    src/ZadKcpp.cc
    src/ZadClassExample.cc
    src/ZadZwracanie.cc
    src/ZadOperatoryPrzypisania.cc
    src/ZadParzysta.cc
    src/ZadStruct.cc
    main.cc
)

# Executable
add_executable(main ${SOURCES})

project(lib1, CXX)

add_library(lib1 STATIC
        src/lib1.cpp
        include/lib1/lib1.hpp
        )
target_include_directories(lib1
        PUBLIC include
        PRIVATE src
        )

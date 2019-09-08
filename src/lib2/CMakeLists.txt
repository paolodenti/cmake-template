project(lib2, CXX)

add_library(lib2 SHARED
        src/lib2.cpp
        include/lib2/lib2.hpp
        )
target_include_directories(lib2
        PUBLIC include
        PRIVATE src
        )
# add ncurses library
find_library(NCURSES_LIB ncurses)
target_link_libraries(lib2 PRIVATE "${NCURSES_LIB}")

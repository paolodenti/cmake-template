project(prog2, CXX)

add_executable(prog2
        main.cpp
        )

find_package(Boost REQUIRED
        COMPONENTS date_time
        )

target_link_libraries(prog2
        PRIVATE lib1
        PRIVATE lib2
        PRIVATE Boost::date_time
        )

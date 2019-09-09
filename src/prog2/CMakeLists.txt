project(prog2, CXX)

add_executable(prog2
        main.cpp
        )

find_package(Boost REQUIRED
        COMPONENTS date_time
        )

if(NOT TARGET Boost::date_time)
    add_library(Boost::date_time IMPORTED INTERFACE)
    set_property(TARGET Boost::date_time PROPERTY INTERFACE_INCLUDE_DIRECTORIES ${Boost_INCLUDE_DIR})
    set_property(TARGET Boost::date_time PROPERTY INTERFACE_LINK_LIBRARIES ${Boost_LIBRARIES})
endif()
target_link_libraries(prog2
        PRIVATE lib1
        PRIVATE lib2
        PRIVATE Boost::date_time
        )

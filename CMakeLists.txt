cmake_minimum_required(VERSION 3.1.0 FATAL_ERROR)

project(Template, CXX)

##############################################
#          set standard install dirs         #
##############################################
include(GNUInstallDirs)

##############################################
#          default compiler options          #
##############################################
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

##############################################
#           platform based options           #
##############################################
if (MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

##############################################
#                    boost                   #
##############################################
set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)

find_package(Boost 1.60 REQUIRED COMPONENTS date_time)
message(STATUS "Boost version: ${Boost_VERSION}")

##############################################
#             packages to build              #
##############################################
add_subdirectory(src/lib1)
add_subdirectory(src/lib2)
add_subdirectory(src/prog1)
add_subdirectory(src/prog2)

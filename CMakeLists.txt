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

##############################################
#           platform based options           #
##############################################
if (MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

##############################################
#             packages to build              #
##############################################
add_subdirectory(src/lib1)
add_subdirectory(src/lib2)
add_subdirectory(src/prog1)
add_subdirectory(src/prog2)

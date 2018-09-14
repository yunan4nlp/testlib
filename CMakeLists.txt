# CMake instructions to make the static lib
project(testlib)

cmake_minimum_required(VERSION 2.8)

ADD_LIBRARY( MyStaticLib STATIC Structure.h  Structure.c )	 
#ADD_LIBRARY( MyStaticLib STATIC Structure.h)

set_target_properties(MyStaticLib PROPERTIES LINKER_LANGUAGE CXX)


# CMake instructions to test using the static lib

SET( APP_EXE StaticTest )

ADD_EXECUTABLE( ${APP_EXE}
                Main.c ) 

TARGET_LINK_LIBRARIES( ${APP_EXE}
                       MyStaticLib )
cmake_minimum_required( VERSION 3.10 )
project( masuperlib )

include_directories( include )

add_library( masuperlib SHARED
    src/masuperlib/masuperlib.cpp )
set_target_properties(masuperlib PROPERTIES PUBLIC_HEADER
    "include/masuperlib/masuperlib.hpp")
INSTALL( TARGETS masuperlib 
    LIBRARY DESTINATION lib
    PUBLIC_HEADER DESTINATION include/masuperlib )

add_executable( masuperlib-test
    test/main.cpp
    test/masuperlib/masuperlib-test.cpp )
target_link_libraries( masuperlib-test masuperlib )
enable_testing()
add_test( NAME masuperlib-test COMMAND masuperlib-test )


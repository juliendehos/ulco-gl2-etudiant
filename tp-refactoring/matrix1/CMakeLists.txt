cmake_minimum_required( VERSION 3.0 )
project( matrix )
include_directories( include )

# library
add_library( matrix-lib
    src/matrix/matrix.cpp )

# executable
add_executable( matrix-app
  app/main.cpp )
target_link_libraries( matrix-app matrix-lib )

# install
install( TARGETS matrix-app DESTINATION bin )

# testing
add_executable( matrix-test
    test/matrix/matrix-test.cpp
    test/main.cpp )
target_link_libraries( matrix-test matrix-lib )
enable_testing()
add_test( NAME matrix-test COMMAND matrix-test )


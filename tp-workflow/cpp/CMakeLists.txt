cmake_minimum_required( VERSION 3.0 )

project( tictactoe )

add_executable( tictactoe-cli tictactoe-cli.cpp Tictactoe.cpp )

install( TARGETS tictactoe-cli DESTINATION bin )

add_executable( tictactoe-test tictactoe-test.cpp Tictactoe.cpp TictactoeTest.cpp )
enable_testing()
add_test( NAME tictactoe-test COMMAND tictactoe-test )


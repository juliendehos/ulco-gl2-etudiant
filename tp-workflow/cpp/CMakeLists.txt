cmake_minimum_required( VERSION 3.0 )

project( tictactoe )

add_executable( tictactoe-cli tictactoe-cli.cpp Tictactoe.cpp )

install( TARGETS tictactoe-cli DESTINATION bin )


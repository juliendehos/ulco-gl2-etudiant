cmake_minimum_required( VERSION 3.10 )
project( board )
add_executable( board src/main.cpp )
install( TARGETS board DESTINATION bin )

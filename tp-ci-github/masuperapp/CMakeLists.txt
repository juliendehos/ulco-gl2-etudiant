cmake_minimum_required( VERSION 3.10 )
project( masuperapp )

add_executable( masuperapp main.cpp )
target_link_libraries( masuperapp -lmasuperlib )
install( TARGETS masuperapp DESTINATION bin )


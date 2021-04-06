cmake_minimum_required( VERSION 3.0 )

project( tictactoe )

add_executable( tictactoe-cli tictactoe-cli.cpp Tictactoe.cpp )

find_package( PkgConfig REQUIRED )
pkg_check_modules( PKGCPPUTEST REQUIRED cpputest )
include_directories( ${PKGCPPUTEST_INCLUDE_DIRS} )
add_executable( tictactoe-test tictactoe-test.cpp Tictactoe.cpp TictactoeTest.cpp )
target_link_libraries( tictactoe-test ${PKGCPPUTEST_LIBRARIES} )

install( TARGETS tictactoe-cli DESTINATION bin )


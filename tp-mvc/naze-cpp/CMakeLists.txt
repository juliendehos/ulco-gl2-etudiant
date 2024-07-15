cmake_minimum_required( VERSION 3.10 )
project( naze )

include_directories( src )
add_library( naze src/Board.cpp )

find_package( PkgConfig REQUIRED )
pkg_check_modules( PKG_SDL2 REQUIRED sdl2 SDL2_gfx )
add_executable( naze-gui 
    app/UiSdl.cpp
    app/naze-gui.cpp )
target_include_directories( naze-gui PRIVATE ${PKG_SDL2_INCLUDE_DIRS} )
target_link_libraries( naze-gui naze ${PKG_SDL2_LIBRARIES} )

add_executable( naze-cli app/naze-cli.cpp )
target_link_libraries( naze-cli naze )

install( TARGETS naze-gui naze-cli DESTINATION bin )

add_executable( naze-test
    test/Board-test.cpp
    test/main.cpp )
target_link_libraries( naze-test naze )
enable_testing()
add_test( NAME naze-test COMMAND naze-test )

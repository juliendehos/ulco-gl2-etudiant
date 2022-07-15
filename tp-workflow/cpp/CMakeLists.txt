cmake_minimum_required( VERSION 3.18 )

project( tictactoe )

add_library( tictactoe 
    src/tictactoe-cli.cpp 
    src/Tictactoe.cpp
    )

add_executable( tictactoe-cli src/tictactoe-cli.cpp )
target_link_libraries( tictactoe-cli tictactoe )

install( TARGETS tictactoe-cli DESTINATION bin )

add_executable( tictactoe-test 
    src/tictactoe-test.cpp 
    src/TictactoeTest.cpp
    )
target_link_libraries( tictactoe-test tictactoe )
enable_testing()
add_test( NAME tictactoe-test COMMAND tictactoe-test )

# test if the python binding compiles
find_package(Python COMPONENTS Interpreter Development REQUIRED)
find_package(pybind11 CONFIG REQUIRED)
pybind11_add_module(tictactoe-binding src/TictactoeBinding.cpp)


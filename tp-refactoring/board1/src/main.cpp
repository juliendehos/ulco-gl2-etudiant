#include "Board.hpp"

int main() {

    std::cout << "\ntesting BoardListStdout" << std::endl;
    BoardListStdout b1;
    b1.add("task 1");
    b1.add("task 2");
    for (const auto & s : b1.report())
        std::cout << s << std::endl;

    std::cout << "\ntesting BoardVectorNull" << std::endl;
    BoardVectorNull b2;
    b2.add("task 1");
    b2.add("task 2");
    for (const auto & s : b2.report())
        std::cout << s << std::endl;

    return 0;
}

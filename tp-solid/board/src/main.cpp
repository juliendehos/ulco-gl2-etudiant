
#include "Board.hpp"

void testBoard(Board & b) {
    std::cout << b.getTitle() << std::endl;
    b.add("item 1");
    b.add("item 2");
    b.reportStdout();
}

int main() {

    Board b1("tmp.txt");
    testBoard(b1);

    return 0;
}


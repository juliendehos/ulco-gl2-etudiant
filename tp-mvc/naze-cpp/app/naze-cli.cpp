
#include <Board.hpp>

#include <iostream>
#include <termios.h>
#include <unistd.h>

int mygetch() {
    struct termios oldattr, newattr;
    int ch;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON | ECHO );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    return ch;
}

int main() {

    // TODO

    // clear screen
    std::cout << "\033[2J\033[1;1H";

    while (true) {
        int c = mygetch();
        std::cout << "\033[2J\033[1;1H";
        switch (c) {
            case 's': std::cout << "Down";  break;
            case 'w': std::cout << "Up";    break;
            case 'a': std::cout << "Left";  break;
            case 'd': std::cout << "Right"; break;
            case 'q': exit(0);
        }
    }

    return 0;
}


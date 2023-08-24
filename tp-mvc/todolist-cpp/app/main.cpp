#include <todolist-cpp/Task.hpp>

#include <iostream>

int main() {

    Task t {1, "TODO"};
    std::cout << t._name << std::endl;

    return 0;
}


#include <fstream>
#include <iostream>

int add3(int n) {
    return n+3;
}

int mul2(int n) {
    return n*2;
}

int mycompute(int v0) {
    std::cout << "add3 " + std::to_string(v0) << std::endl;
    const int v1 = add3(v0);
    std::cout << "mul2 " + std::to_string(v1) << std::endl;
    const int v2 = mul2(v1);
    return v2;
}

// TODO int mycomputeFile(int v0)

int main() {
    std::cout << "this is main1" << std::endl;

    const int res = mycompute(18);
    std::cout << res << std::endl;

    // TODO tester mycomputeFile

    return 0;
}


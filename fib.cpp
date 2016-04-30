#include "fib.h"
#include <cstdlib>
#include <iostream>

int main(int argc, char const *argv[])
{
    if (argc != 2) {
        std::cerr << "Usage: fib <num>" << std::endl;
        return 1;
    }

    unsigned long long N = std::strtoull(argv[1], nullptr, 10);
    std::cout << fib<unsigned long long>(N) << std::endl;
    return 0;
}

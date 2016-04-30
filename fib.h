#pragma once

#include <utility>


template<typename Int>
Int fib(unsigned long long n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    Int a = 0;
    Int b = 1;
    for (auto i = 1ull; i != n; ++i) {
        a = a + b;
        std::swap(a, b);
    }
    return b;
}

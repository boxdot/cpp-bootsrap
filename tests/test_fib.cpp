#include "../fib.h"
#include "catch.hpp"


TEST_CASE("Test fibonacci function", "[fib]") {
    REQUIRE(fib<unsigned long long>(0) == 0);
    REQUIRE(fib<unsigned long long>(1) == 1);
    REQUIRE(fib<unsigned long long>(2) == 1);
    REQUIRE(fib<unsigned long long>(3) == 2);
    REQUIRE(fib<unsigned long long>(4) == 3);
    REQUIRE(fib<unsigned long long>(5) == 5);
}

#include "a.hpp"

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

int factorial(int number) { return number <= 1 ? number : factorial(number - 1) * number; }

TEST_CASE("get_a return the hex of a") {
    constexpr auto expected = 'a' + 0;
    CHECK(expected == get_a());
}

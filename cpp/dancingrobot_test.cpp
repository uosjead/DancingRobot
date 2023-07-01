#include <iostream>
#include <stdio.h>
#include "dancingrobot.hpp"

#define ASSERT_EQUAL(x, y) { \
    if (!(x == y)) {\
        std::cout << __FUNCTION__ \
            << " failed on line " << __LINE__ \
            << " got: " << x << " expected: " << y \
            << std::endl; \
        exit(1);\
    } \
}

void test_dancingrobot()
{
    ASSERT_EQUAL(FindDancePosition(0),  0);
    ASSERT_EQUAL(FindDancePosition(1), 1);
    ASSERT_EQUAL(FindDancePosition(2), -1);
    ASSERT_EQUAL(FindDancePosition(3), -4);
    ASSERT_EQUAL(FindDancePosition(4), -5);
    ASSERT_EQUAL(FindDancePosition(5), -3);
    ASSERT_EQUAL(FindDancePosition(6), 0);
}

int main(void) {
    test_dancingrobot();
}

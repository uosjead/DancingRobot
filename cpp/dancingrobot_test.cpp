#include <iostream>
#include <stdio.h>
#include "dancingrobot.hpp"

#define ASSERT(x) { if (!(x)) {std::cout << __FUNCTION__ << " failed on line " << __LINE__ << std::endl; exit(1);} }

void test_dancingrobot()
{
    ASSERT((FindDancePosition(0) == 1));
    ASSERT((FindDancePosition(3) == 4));
}

int main(void) {
    test_dancingrobot();
}

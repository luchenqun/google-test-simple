#include <iostream>
#include "gtest/gtest.h"
#include "my-math.h"

using namespace std;

int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc, argv);

    int ret = 0;
    ret = RUN_ALL_TESTS();

    return ret;
}

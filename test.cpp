
#include "gtest/gtest.h"
#include "time.h"
#include <iostream>

TEST(Time,TimePrint)
{
    time_t t = time(NULL);
    struct tm* local_time = localtime(&t);
    std::cout << local_time->tm_year + 1900 << "-" << local_time->tm_mon + 1 << "-" << local_time->tm_mday << std::endl;
}

int main(int argc,char** argv)
{
    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}
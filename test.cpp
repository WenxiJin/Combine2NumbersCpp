#include "main.c++"
#include <iostream>
#include <gtest/gtest.h>

using testing::Test;

#define GTEST_COUT std::cerr << "[          ] [ INFO ]"

typedef std::tr1::tuple<short, short> TwoNums;


class Combine2NumTest : public ::testing::TestWithParam<TwoNums> {
  public:
    Combine2Numbers p;
};

TEST_P(Combine2NumTest, testAll) {
    short a = std::tr1::get<0>(GetParam());
    short b = std::tr1::get<1>(GetParam());
    GTEST_COUT << "a:" << a << " b:" << b;
    EXPECT_EQ(a, p.getA(p.combine2Number(a, b)));
    EXPECT_EQ(b, p.getB(p.combine2Number(a, b)));
}

INSTANTIATE_TEST_CASE_P(TestThemAll,
                        Combine2NumTest,
                        testing::Combine(testing::Range((short)-400, (short)401),
                                         testing::Range((short)-400, (short)401)));

int main (int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

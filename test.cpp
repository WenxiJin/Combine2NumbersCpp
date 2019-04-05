#include "main.c++"
#include <iostream>
#include <gtest/gtest.h>

using testing::Test;

#define GTEST_COUT std::cerr << "[          ] [ INFO ]"

// The fixture for testing class Project1. From google test primer.
class Combine2NumberTest : public ::testing::Test {
  protected:
	// You can remove any or all of the following functions if its body
	// is empty.

	Combine2NumberTest() {
		// You can do set-up work for each test here.
	}

	virtual ~Combine2NumberTest() {
		// You can do clean-up work that doesn't throw exceptions here.
	}

	// If the constructor and destructor are not enough for setting up
	// and cleaning up each test, you can define the following methods:
	virtual void SetUp() {
		// Code here will be called immediately after the constructor (right
		// before each test).
	}

	virtual void TearDown() {
		// Code here will be called immediately after each test (right
		// before the destructor).
	}

	// Objects declared here can be used by all tests in the test case for Project1.
	Combine2Numbers p;
};

TEST_F(Combine2NumberTest, Minus400ToPlus400) {
    GTEST_COUT << " *** Running all tests..." << std::endl;
    GTEST_COUT << " *** sizeof(short):" << sizeof(short) << std::endl;
    GTEST_COUT << " *** sizeof(int):" << sizeof(int) << std::endl;

    EXPECT_EQ(-400, p.getA(p.combine2Number(-400, 400)));
    EXPECT_EQ(400, p.getB(p.combine2Number(-400, 400)));

    EXPECT_EQ(-400, p.getA(p.combine2Number(-400,-400)));
    EXPECT_EQ(-400, p.getB(p.combine2Number(-400,-400)));

    EXPECT_EQ(400, p.getA(p.combine2Number(400, 400)));
    EXPECT_EQ(400, p.getB(p.combine2Number(400, 400)));

    EXPECT_EQ(400, p.getA(p.combine2Number(400, -400)));
    EXPECT_EQ(-400, p.getB(p.combine2Number(400, -400)));

    EXPECT_EQ(0, p.getA(p.combine2Number(0, 0)));
    EXPECT_EQ(0, p.getB(p.combine2Number(0, 0)));

    EXPECT_EQ(-128, p.getA(p.combine2Number(-128, 127)));
    EXPECT_EQ(127, p.getB(p.combine2Number(-128, 127)));

    EXPECT_EQ(127, p.getA(p.combine2Number(127, -128)));
    EXPECT_EQ(-128, p.getB(p.combine2Number(127, -128)));
}

int main (int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

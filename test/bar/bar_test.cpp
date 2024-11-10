#include "gtest/gtest.h"

class BarTestFixture : public testing::Test {
  protected:
    void SetUp() override
    {
    }

    void TearDown() override
    {
    }
};

TEST_F(BarTestFixture, TestCaseName)
{
    EXPECT_EQ(0, 1);
}

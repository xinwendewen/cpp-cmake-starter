#include "gtest/gtest.h"

class FooTestFixture : public testing::Test {
  protected:
    void SetUp() override
    {
    }

    void TearDown() override
    {
    }
};

TEST_F(FooTestFixture, TestCaseName)
{
    EXPECT_EQ(0, 1);
}

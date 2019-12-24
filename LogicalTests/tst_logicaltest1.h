#ifndef TST_LOGICALTEST1_H
#define TST_LOGICALTEST1_H

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

using namespace testing;

TEST(LogicalTests, LogicalTest1)
{
    EXPECT_EQ(1, 1);
    ASSERT_THAT(0, Eq(0));
}

#endif // TST_LOGICALTEST1_H

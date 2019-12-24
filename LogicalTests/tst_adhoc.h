#ifndef TST_ADHOC_H
#define TST_ADHOC_H

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

using namespace testing;

TEST(AdHocTests, adHocTest1)
{
    EXPECT_EQ(1, 1);
    ASSERT_THAT(0, Eq(0));
}


#endif // TST_ADHOC_H

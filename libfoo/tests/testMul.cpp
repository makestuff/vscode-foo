#include <gtest/gtest.h>
#include <foo/mul.h>

TEST(Multiply, verifySimpleMultiplication)
{
  ASSERT_EQ(200, foo::mul(10, 20));
}

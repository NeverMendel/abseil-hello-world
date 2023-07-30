#include "hello_world.h"

#include <gtest/gtest.h>

namespace hello_world {

namespace {

TEST(GreetTest, HelloWorld) {
  EXPECT_EQ(Greet(), "Hello World!");
}

TEST(GreetTest, HelloSteve) {
  EXPECT_EQ(Greet("Steve"), "Hello Steve!");
}

}

}

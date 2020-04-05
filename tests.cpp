#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, Newline) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "\n";
    EXPECT_EQ("\n", echo(2,test_val));
}

TEST(EchoTest, Backspace) {
	char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "\b";
	EXPECT_EQ("\b", echo(2, test_val));
}

TEST(EchoTest, Tab) {
	char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "\t";
	EXPECT_EQ("\t", echo(2, test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

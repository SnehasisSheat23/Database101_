#include "token.h"
#include <gtest/gtest.h>

TEST(TokenTest, Creation) {
    Token token("IDENTIFIER", "variable");
    EXPECT_EQ(token.getType(), "IDENTIFIER");
    EXPECT_EQ(token.getValue(), "variable");
}

TEST(TokenTest, DefaultConstructor) {
    Token token;
    EXPECT_EQ(token.getType(), "");
    EXPECT_EQ(token.getValue(), "");
}

TEST(TokenTest, Setters) {
    Token token;
    token.setType("NUMBER");
    token.setValue("123");
    EXPECT_EQ(token.getType(), "NUMBER");
    EXPECT_EQ(token.getValue(), "123");
}
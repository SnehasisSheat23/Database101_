#include "lexer.h"
#include "gtest/gtest.h"

class LexerTest : public ::testing::Test {
protected:
    Lexer* lexer;

    void SetUp() override {
        lexer = new Lexer();
    }

    void TearDown() override {
        delete lexer;
    }
};

TEST_F(LexerTest, TestNextToken) {
    lexer->setInput("int x = 10;");
    Token token = lexer->nextToken();
    EXPECT_EQ(token.getType(), TokenType::KEYWORD);
    EXPECT_EQ(token.getValue(), "int");

    token = lexer->nextToken();
    EXPECT_EQ(token.getType(), TokenType::IDENTIFIER);
    EXPECT_EQ(token.getValue(), "x");

    token = lexer->nextToken();
    EXPECT_EQ(token.getType(), TokenType::ASSIGN);
    EXPECT_EQ(token.getValue(), "=");

    token = lexer->nextToken();
    EXPECT_EQ(token.getType(), TokenType::NUMBER);
    EXPECT_EQ(token.getValue(), "10");

    token = lexer->nextToken();
    EXPECT_EQ(token.getType(), TokenType::SEMICOLON);
    EXPECT_EQ(token.getValue(), ";");
}

TEST_F(LexerTest, TestHasMoreTokens) {
    lexer->setInput("int x;");
    EXPECT_TRUE(lexer->hasMoreTokens());
    lexer->nextToken(); // Consume first token
    EXPECT_TRUE(lexer->hasMoreTokens());
    lexer->nextToken(); // Consume second token
    EXPECT_TRUE(lexer->hasMoreTokens());
    lexer->nextToken(); // Consume third token
    EXPECT_FALSE(lexer->hasMoreTokens());
}

TEST_F(LexerTest, TestEmptyInput) {
    lexer->setInput("");
    EXPECT_FALSE(lexer->hasMoreTokens());
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
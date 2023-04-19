#include <gtest/gtest.h>
#include "../src/trim_string.h"
#include <string>


bool isWhitespace(char whitespace){
    return whitespace == ' ' || whitespace == '\n'|| whitespace == '\t';
}

TEST(TextTrimTest, TrimWhiteSpace){

    std::string test_text = "   przykladowy string    ";
    std::string trimmed_test_text = textTrim(test_text, isWhitespace);
    EXPECT_EQ(trimmed_test_text, "przykladowy string");
}

TEST(TextTrimTest, TrimDigits){
    std::string test_text = "12345Novomatic5678";
    std::string trimmed_test_text = textTrim(test_text, isdigit);

    EXPECT_EQ(trimmed_test_text, "Novomatic");
}

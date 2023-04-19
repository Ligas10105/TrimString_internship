#include <gtest/gtest.h>
#include "../src/trim_string.h"


TEST(TextTrimTest, TrimWhiteSpace){
    std::string test_text = "   przykladowy string    ";
    std::string trimmed_test_text = textTrim(test_text, isWhitespace);

    EXPECT_EQ(trimmed_test_text, "przykladowy string");
}

TEST(TextTrimTest, TrimDigits){
    std::string test_text = "12345Novomatic5678";
    std::string trimmed_test_text = textTrim(test_text, isDigit);

    EXPECT_EQ(trimmed_test_text, "Novomatic");
}

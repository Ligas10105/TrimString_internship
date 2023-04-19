#include "../src/trim_string.h"
#include <gtest/gtest.h>
#include <string>


TEST(TextTrimTest, TrimWhiteSpace){

    std::string test_text = "   przykladowy string    ";
    std::string trimmed_test_text = textTrim(test_text, isspace);
    EXPECT_EQ(trimmed_test_text, "przykladowy string");
}

TEST(TextTrimTest, TrimDigits){
    std::string test_text = "12345Novomatic5678";
    std::string trimmed_test_text = textTrim(test_text, isdigit);

    EXPECT_EQ(trimmed_test_text, "Novomatic");
}


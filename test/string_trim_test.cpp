#include "../src/trim_string.h"
#include <gtest/gtest.h>
#include <string>
#include <vector>
#include <cctype>
#include <list>


TEST(TextTrimTest, TrimWhiteSpace) {
    std::string input = "   przykladowy string    ";
    std::string expected_output = "przykladowy string";
    std::string output = containerTrim(input, isspace);
    EXPECT_EQ(output, expected_output);
}

TEST(TextTrimTest, TrimNewline) {
    std::string input = "\n\n\n\nprzykladowy string\n\n\n";
    std::string expected_output = "przykladowy string";
    std::string output = containerTrim(input, isspace);
    EXPECT_EQ(output, expected_output);
}

TEST(TextTrimTest, TrimTabulature) {
    std::string input = "\t\t\t\tprzykladowy string\t\t\t\t";
    std::string expected_output = "przykladowy string";
    std::string output = containerTrim(input, isspace);
    EXPECT_EQ(output, expected_output);
}

TEST(TextTrimTest, TrimVertical) {
    std::string input = "\v\v\vprzykladowy string\v\v\v";
    std::string expected_output = "przykladowy string";
    std::string output = containerTrim(input, isspace);
    EXPECT_EQ(output, expected_output);
}

TEST(TextTrimTest, TrimForm) {
    std::string input = "\f\f\f\fprzykladowy string\f\f\f\f";
    std::string expected_output = "przykladowy string";
    std::string output = containerTrim(input, isspace);
    EXPECT_EQ(output, expected_output);
}

TEST(TextTrimTest, TrimCarriageReturn) {
    std::string input = "\r\nprzykladowy string\r\n";
    std::string expected_output = "przykladowy string";
    std::string output = containerTrim(input, isspace);
    EXPECT_EQ(output, expected_output);
}


TEST(TextTrimTest, TrimDigits) {
    std::string input = "12345Novomatic5678";
    std::string expected_output = "Novomatic";
    std::string output = containerTrim(input, isdigit);
    EXPECT_EQ(output, expected_output);
}

TEST(ContainerTrimTest, TrimsIntegers) {
    std::vector<int> input = {1, 2, 3, 0, 4, 5};
    std::vector<int> expected_output = {3, 0, 4};
    auto output = containerTrim(input, [](const int n) { return n < 3 || n > 4; });
    EXPECT_EQ(output, expected_output);
}

TEST(ContainerTrimTest, TrimsEmptyContainer) {
    std::vector<double> input;
    std::vector<double> expected_output;
    auto output = containerTrim(input, [](const double d) { return true; });
    EXPECT_EQ(output, expected_output);
}

TEST(ContainerTrimTest, TrimsEmptyList) {
    std::list<std::string> input = {};
    std::list<std::string> expected_output = {};
    auto output = containerTrim(input,
                                [](const std::string &s) { return std::isspace(s.front()) || std::isspace(s.back()); });
    EXPECT_EQ(output, expected_output);
}





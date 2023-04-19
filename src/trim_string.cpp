#include <iostream>
#include <string>
#include "trim_string.h"

template<typename Predicate>
std::string textTrim(std::string text, Predicate predicate) {
    int left_character_index{0};
    int right_character_index = text.length() - 1;

    while (left_character_index <= right_character_index && predicate(text[left_character_index])) {
        left_character_index++;
    }

    while (right_character_index >= left_character_index && predicate(text[right_character_index])) {
        right_character_index--;
    }
    return text.substr(left_character_index, right_character_index - left_character_index + 1);

}

bool isWhitespace(char whitespace) {
    return whitespace == ' ' || whitespace == '\t' || whitespace == '\n';
}

bool isDigit(char digit) {
    return digit >= '0' && digit <= '9';
}

/*int main() {

    std::string text = "    Przykladowy string      ";
    std::string trimmed_text = textTrim(text, isWhitespace);
    std::cout << trimmed_text << std::endl;

    std::string text_1 = "12345Novomatic5678";
    std::string trimmed_text_1 = textTrim(text_1, isDigit);
    std::cout << trimmed_text_1 << std::endl;


}*/








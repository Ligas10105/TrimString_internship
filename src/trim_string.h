//
// Created by ligas on 19.04.2023.
//
#ifndef TRIMSTRING_INTERNSHIP_TRIM_STRING_H
#define TRIMSTRING_INTERNSHIP_TRIM_STRING_H
#include <cstdlib>
#include <string>
#include <iostream>

template<typename Predicate>
std::string textTrim(std::string text, Predicate predicate){
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



#endif //TRIMSTRING_INTERNSHIP_TRIM_STRING_H

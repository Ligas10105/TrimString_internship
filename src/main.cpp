#include <iostream>
#include <string>

template <typename Predicate>
std::string textTrim(std::string text, Predicate predicate){
    int left_character_index {0};
    int right_character_index = text.length() - 1;

    while(left_character_index <= right_character_index && predicate(text[left_character_index])){
        left_character_index++;
    }

    while(right_character_index >= left_character_index && predicate(text[right_character_index])){
        right_character_index--;
    }
    return text.substr(left_character_index, right_character_index - left_character_index);

}

bool isWhitespace(char whitespace){
    return whitespace == ' ' || whitespace == '\n' || whitespace == '\t';
}



int main() {


}






//
// Created by ligas on 19.04.2023.
//

#ifndef TRIMSTRING_INTERNSHIP_TRIM_STRING_H
#define TRIMSTRING_INTERNSHIP_TRIM_STRING_H

template<typename Predicate>
std::string textTrim(std::string text, Predicate predicate);

bool isWhitespace(char whitespace);

bool isDigit(char digit);

#endif //TRIMSTRING_INTERNSHIP_TRIM_STRING_H

//
// Created by ligas on 19.04.2023.
//
#ifndef TRIMSTRING_INTERNSHIP_TRIM_STRING_H
#define TRIMSTRING_INTERNSHIP_TRIM_STRING_H

#include <cstdlib>
#include <string>
#include <iostream>
#include <algorithm>


template<typename Container, typename Predicate>
Container containerTrim(Container container, Predicate predicate) {
    auto left = std::find_if_not(container.begin(), container.end(), predicate);
    auto right = std::find_if_not(container.rbegin(), container.rend(), predicate).base();

    if (left != container.end() && right != container.begin()) {
        --right;
        return Container(left, std::next(right));
    } else {
        return Container();
    }
}


#endif //TRIMSTRING_INTERNSHIP_TRIM_STRING_H

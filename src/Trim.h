//
// Created by ligas on 18.04.2023.
//

#ifndef TRIMSTRING_INTERNSHIP_TRIM_H
#define TRIMSTRING_INTERNSHIP_TRIM_H
#include <string>
#include <cstdlib>

class Trim {
public:
    Trim();


    int left_letter_index {};
    int right_letter_index {};
    std::string text {};

    void loadText();{
        std::cout << "Wprowadź tekst, z którego mam się pozbyć białych znaków: " << std::endl;
        std::cin >> text;
    }
};


#endif //TRIMSTRING_INTERNSHIP_TRIM_H

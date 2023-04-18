//
// Created by ligas on 18.04.2023.
//

#include "Trim.h"
#include <iostream>

Trim::Trim{

};


void Trim::loadText() {
    std::cout << "Wprowadź tekst, z którego mam się pozbyć białych znaków: " << std::endl;
    std::cin >> text;
}
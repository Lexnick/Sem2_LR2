//
// Created by alex on 09.03.2021.
//

#ifndef UNTITLED11_FAMILY_H
#define UNTITLED11_FAMILY_H

#include <iostream>
#include <string>

class Family {
    float SumIncome;
public:
    void SetSumIncome(const float& Value);
    std::string Surname;
    unsigned int Size;
    float GetSumIncome();
    float AverageIncome();
    void print();
};


#endif //UNTITLED11_FAMILY_H

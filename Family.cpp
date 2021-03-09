//
// Created by alex on 09.03.2021.
//
#include "Family.h"
#include <iostream>
#include <string>

float Family::GetSumIncome() {
    return SumIncome;
}
float Family::AverageIncome() {
    return GetSumIncome()/Size;
}
void Family::print(){
    std::cout<<"Surname: "<<Surname<<std::endl;
    std::cout<<"Size: "<<Size<<std::endl;
    std::cout<<"SumIncome: "<<SumIncome<<std::endl;
    std::cout<<"AverageIncome:  "<<AverageIncome()<<std::endl;
}
void Family::SetSumIncome(const float& Value) {
    SumIncome=Value;
}


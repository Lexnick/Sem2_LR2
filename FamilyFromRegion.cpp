//
// Created by alex on 09.03.2021.
//

#include "FamilyFromRegion.h"
#include <iostream>
#include "Family.h"
#include "Region.h"

FamilyFromRegion::FamilyFromRegion():
Region("",0.0,0.0)
{}

float FamilyFromRegion::GetSumIncome() {
    if (Family::AverageIncome() <= Region::Threshold)
        return Family::GetSumIncome() + Payments;
    else return Family::GetSumIncome();
}

void FamilyFromRegion::print() {
    std::cout << "Surname: " << Surname << std::endl;
    std::cout << "Size: " << Size << std::endl;
    std::cout << "SumIncome: " << GetSumIncome() << std::endl;
    std::cout << "AverageIncome: " << AverageIncome() << std::endl;
    std::cout << "RegionName: " << Name << std::endl;
    std::cout << "Threshold:  " << Threshold << std::endl;
}
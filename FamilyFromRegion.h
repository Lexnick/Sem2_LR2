//
// Created by alex on 09.03.2021.
//

#ifndef UNTITLED11_FAMILYFROMREGION_H
#define UNTITLED11_FAMILYFROMREGION_H

#include <iostream>
#include "Family.h"
#include "Region.h"

class FamilyFromRegion : public Family, public Region {
public:
    FamilyFromRegion();
    float GetSumIncome();

    void print();
};


#endif //UNTITLED11_FAMILYFROMREGION_H

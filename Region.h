//
// Created by alex on 09.03.2021.
//

#ifndef UNTITLED11_REGION_H
#define UNTITLED11_REGION_H

#include <iostream>
#include <string>

class Region {
public:
    std::string Name;
    float Payments;
    float Threshold;
    Region(const std::string& Name_,const float& Payments_, const float& Threshold_);
    void print();
};


#endif //UNTITLED11_REGION_H

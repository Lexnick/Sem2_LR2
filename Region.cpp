//
// Created by alex on 09.03.2021.
//

#include "Region.h"
#include <iostream>
#include <string>

Region::Region(const std::string &Name_, const float& Payments_, const float &Threshold_) : Name(Name_), Payments(Payments_),
                                                                         Threshold(Threshold_) {
}

void Region::print() {
    std::cout<<"Name: "<<Name<<std::endl;
    std::cout<<"Payments: "<<Payments<<std::endl;
    std::cout<<"Threshold: "<<Threshold<<std::endl;
}

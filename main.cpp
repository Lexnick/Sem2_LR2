#include <iostream>
#include "Family.h"
#include "Region.h"
#include "FamilyFromRegion.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    Family Ivanovi;
    Ivanovi.Surname="Ivanovi";
    Ivanovi.Size=3;
    Ivanovi.SetSumIncome(50000.0);
    Ivanovi.print();
    Region Moscow("Moscow", 1000.0, 10000.0);
    Moscow.print();
    FamilyFromRegion Petrovi;
    Petrovi.Surname="Petrovi";
    Petrovi.Size=1;
    Petrovi.SetSumIncome(30000.0);
    Petrovi.Name="Tver";
    Petrovi.Payments=500.0;
    Petrovi.Threshold=10000.0;
    Petrovi.print();
    return 0;
}

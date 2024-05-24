#include <iostream>
#include "Car.h"
#include "SUV.h"
#include "Motor.h"
#include "Engineer.h"

int main() {
    // sprint 5
    Car* myCars[5];
    myCars[0] = new SUV;
    myCars[1] = new SUV;
    myCars[2] = new Motor;
    myCars[3] = new Motor;
    myCars[4] = new SUV;
    for (int i = 0; i < 5; i++) myCars[i]->klaxon(1);

    // Sprint 4
    Car* myCar;
    myCar = new Car(100.0, 4, 4500.0, 2020, 15.0);
    std::cout << "Speed: " << myCar->speed << "\n";
    std::cout << "Wheels: " << myCar->getWheels() << "\n";

    Engineer* bab = new Engineer;
    std::cout << "Car Price: " << bab->getCarPrice(myCar) << "\n";
    std::cout << "Car Model Year: " << bab->getCarModelYear(myCar) << "\n";
    std::cout << "Car Fuel Efficiency: " << bab->getCarFuelEfficiency(myCar) << "\n";

    getchar();

    delete bab;
    for (int i = 0; i < 5; i++) delete myCars[i];
    delete myCar;

    return 0;
}

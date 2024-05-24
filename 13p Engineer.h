#pragma once
#include "Car.h"

class Engineer {
public:
    int getCarPrice(Car*);
    int getCarModelYear(Car*);
    float getCarFuelEfficiency(Car*);
    float getCarSpeed(Car*);
    int getCarWheels(Car*);
};

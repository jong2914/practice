#include "Engineer.h"

int Engineer::getCarPrice(Car* xx) {
    return xx->price; 
}

int Engineer::getCarModelYear(Car* xx) {
    return xx->modelYear;
}

float Engineer::getCarFuelEfficiency(Car* xx) {
    return xx->fuelEfficiency; 
}

float Engineer::getCarSpeed(Car* xx) {
    return xx->speed; 
}

int Engineer::getCarWheels(Car* xx) {
    return xx->wheels; 
}

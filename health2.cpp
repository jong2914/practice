#include <cmath>
#include"health2.h"


int CHealth::nCHealth = 0;

// constructors
CHealth::CHealth(int a) {
    nCHealth++;
    age = a;
    beat5min = temp5min = nullptr;
}

// destructor
CHealth::~CHealth() {
    nCHealth--;
    delete[] beat5min;
    delete[] temp5min;
}

// member functions
void CHealth::measure() {}

void CHealth::measure(int value) {}

int CHealth::run5min() {
    return 0;
}

// private member functions
void CHealth::cel2faren() {
    faren = cel * 9.0 / 5.0 + 32.0;
}

void CHealth::faren2cel() {}

void CHealth::GetHealthAge(){ healthAge = beat / pressure;}

void CHealth::GetBMI() {}

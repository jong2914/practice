#pragma once
#include "CarS3.h"
class SUV : public Car {
private:
	int spareWheels;
public:
	void klaxon(int);
	float getTotalPrice();
};

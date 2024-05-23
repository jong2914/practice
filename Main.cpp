#include <iostream>
#include "CarS3.h"
#include "SUVS3.h"
using namespace std;
int main() {
	SUV* newSUV = new SUV();
	newSUV->setPrice(5000);
	cout << "fuel" << newSUV->fuel << "\n";
	//cout << " price " << newSUV->price << "\n";
	cout << " price " << newSUV->getPrice() << "\n";

	newSUV->setSparewheels(2);
	std::cout << "Spare wheels are " << newSUV->getSparewheels() << std::endl;

	delete newSUV;
	return 0;
}

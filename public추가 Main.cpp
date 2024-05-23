#include <iostream>
using namespace std;
#include "CarS3.h"
#include "SUVS3.h"
int main() {
	SUV* newSUV = new SUV();
	newSUV->setPrice(5000);
	cout << " price " << newSUV->getPrice() << "\n";

	newSUV->setmodelYear(2022);
	cout << "Model year: " << newSUV->getmodelYear() << endl;
	cout << "Model year: " << newSUV->modelYear << endl;

	delete newSUV;
	return 0;
}

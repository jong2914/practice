#include "SUVS3.h"
#include <iostream>

float SUV::getTotalPrice() {
	return (this->wheels * 100.0 + this->price);
}

{
	return 0;
}
void SUV::klaxon(int ii) {
	for (int i = 0; i < ii; i++) {
		std::cout << "Beep\n";
	}
}

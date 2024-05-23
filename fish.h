#pragma once
#include "ani.h"
class fish :public animal {
public:
	fish() { fin = 1; };
	int fin;
	void swim() {std::cout << " I swim\n"; }
};

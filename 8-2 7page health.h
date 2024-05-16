#pragma once
class CHealth {
public:
	CHealth() {};
	CHealth(int a);
	int age;
	float cel, faren;
	void cel2faren() {
		faren = cel * 9.0 / 5.0 + 32.0;
	}
	void faren2cel();
	void measureCel();
};

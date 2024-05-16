#include<iostream>
#include "health.h"
using namespace std;
int main() {
	CHealth VIP(65), * mario, vip2, *mickey;
	mario = new CHealth(70);
	mickey = new CHealth(70);
	
	cout << " " << VIP.age << " " << mario->age << endl;
	cout << " " << vip2.age << " " << mickey->age << endl;

	VIP.measureCel();
	mario->measureCel();
	vip2.measureCel();
	mickey->measureCel();
	
	cout << " " << VIP.cel << "C " << mario->faren << "F" << endl;
	cout << " size " << sizeof(CHealth) << " " << endl;
	cout << " " << vip2.cel << "C " << mickey->faren << "F" << endl;
	cout << " size " << sizeof(CHealth) << " " << endl;

	getchar();
	return 1;
}

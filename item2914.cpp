#include<iostream>
using namespace std;
int main() {
	float a, b, c, x, dx, num, anal;
	//differentiation
	cout << "a b c ?=";
	cin >> a >> b >>c;
	cout << "x dx ?=";
	cin >> x >> dx;
	anal = 2 * a * x + b;
	num = (2 * a * (x+dx)) + b;
	cout << "num" << num << "anal" << anal << endl;
	cout << "error=" << (num - anal) / anal * 100 << "%\n";
	//integration
	float d, e;
	int N;
	cout << "d e N = ";
	cin >> d >> e >> N;
	anal = a * (pow(d, 3) - pow(e, 3)) / 3 + b * (pow(d, 2) - pow(e, 2)) / 2 + c * (d - e);
	dx = (d - e) / N;
	num = 0;
	for (int i = 0; i < N;i++) {
		num += a * pow(e + dx * i, 2) * dx + b * (e + dx * i) * dx + c * dx;
	}
	cout << "num" << num << "anal" << anal << endl;
	cout << "error = " << (num - anal) / anal * 100 << "%\n";


}
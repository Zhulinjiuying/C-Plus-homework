#include <iostream>
using namespace std;

double pi = 3.14159;

int main() {
	int h, r, a;
	float s, sum;
	cin >> h >> r;
	s = pi * r * r * h / 1000.0;
	sum = 20.0 / s;
	if ((sum - (int)sum) > 0) sum++;
	a = (int)sum;
	cout << a << endl;
	return 0;
}
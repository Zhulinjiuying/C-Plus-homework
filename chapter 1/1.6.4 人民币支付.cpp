#include <iostream>
using namespace std;

int main() {
	int n, a, b, c, d, e, sum;
	a = b = c = d = e = 0;
	cin >> n;
	if (n < 0 && n > 1000) return 0;
	if (n >= 100) a = n / 100;
	sum = n - a * 100;
	if (sum >= 50) b = sum / 50;
	sum = sum - b * 50;
	if (sum >= 20) c = sum / 20;
	sum = sum - c * 20;
	if (sum >= 10) d = sum / 10;
	sum = sum - d * 10;
	if (sum >= 5) e = sum / 5;
	sum = sum - e * 5;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;
	cout << sum << endl;
	return 0;
}
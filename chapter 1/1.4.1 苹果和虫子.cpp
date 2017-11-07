#include <iostream>
using namespace std;

int main() {
	int n, x, y;
	float sum;
	int a;
	cin >> n >> x >> y;
	sum = (float)y / (float)x;
	if ((sum - (int)sum) > 0.0) sum++;
	a = n - int(sum);
	if (a < 0) a = 0;
	cout << a << endl;
	return 0;
}
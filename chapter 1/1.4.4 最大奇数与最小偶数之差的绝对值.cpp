#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a[5], maxOdd, minEven, sum;
	for (int i = 0; i <= 5; i++) {
		cin >> a[i];
	}
	maxOdd = 1;
	minEven = 32767;
	for (int i = 0; i <= 5; i++) {
		if (a[i] % 2 == 0) {
			if (a[i] < minEven) minEven = a[i];
		}
		else {
			if (a[i] > maxOdd) maxOdd = a[i];
		}
	}
	sum = maxOdd - minEven;
	cout << abs(sum) << endl;
	return 0;
}
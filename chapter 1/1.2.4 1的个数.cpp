#include <iostream>
using namespace std;

int sum = 0;
int count(int n) {
	if (n % 2 != 0) sum++;
	n = n / 2;
	if (n != 0) count(n);
	return sum;
}

int main() {
	int k, a[1000];

	cin >> k;
	for (int i = 0; i < k; i ++) {
		cin >> a[i];
	}
	for (int i = 0; i < k; i ++) {
		sum = 0;
		cout << count(a[i]) << endl;
	}
	return 0;
}
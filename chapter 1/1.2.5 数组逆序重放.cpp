#include <iostream>
using namespace std;

int main() {
	int n, temp, a[1000];
	cin >> n;
	if (n < 1 && n > 100) {
		cout << "Error !" << endl;
		return 0;
	}
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n / 2; i++) {
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}
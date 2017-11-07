#include <iostream>
using namespace std;

int main() {
	int n, max, a[100];
	cin >> n;
	if (n < 1 && n >= 100) {
		cout << "Error!" << endl;
		return 0;	
	}
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] < 1 && a[i] > 100) {
			cout << "Error!" << endl;
			return 0;	
		}
	}
	max = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] > max) max = a[i];
	}
	cout << max << endl;
	return 0;
}
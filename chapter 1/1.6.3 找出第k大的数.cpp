#include <iostream>
using namespace std;

void find(int n, int k, int a[]) {
	int sum;
	for (int i = 0; i < n; i++) {
		sum = a[i];
		int flag = 0;
		for (int j = 0; j < n; j++) {
			if (sum < a[j]) flag++;
		}
		if(flag == k - 1) {
			cout << sum << endl;
			break;
		}
	}

}

int main() {
	int n, k, a[100];
	cin >> n;
	cin >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	find(n, k, a);
	return 0;
}
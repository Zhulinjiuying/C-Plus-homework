#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n, x[100];
	double a, b, c, d, t, sum;
	a = b = c = d =0;
	cin >> n;
	if (n < 0 || n > 100) {
		return 0;
	}
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	for (int i = 0; i < n; i++) {
		if (x[i] < 0) {
			return 0;
		}
	}
	for (int i = 0; i < n; i++) {
		if (x[i] >= 1 && x[i] <= 18) a++;
		else if (x[i] >= 19 && x[i] <= 35) b++;
		else if (x[i] >= 36 && x[i] <= 60) c++;
		else  d++;
	}
	t = double(n);
	sum = a / t * 100.00;
	cout << "1-18: " << setiosflags(ios::showpoint)<< setprecision(4) << sum << "%" << endl;
	sum = b / t * 100.00;
	cout << "19-35: " << sum << "%" <<endl;
	sum = c / t * 100.00;
	cout << "36-60: " << sum<< "%" <<endl;
	sum = d / t * 100.00;
	cout << "60-: " << sum << "%" <<endl;
	return 0;
}
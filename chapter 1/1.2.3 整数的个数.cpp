#include <iostream>
using namespace std;

int main() {
	int n, d[1000];
	int a = 0, b = 0, c = 0;
	cin >> n;
	if ( n < 1 && n > 100)  {
		cout << "Error !" << endl;
		return 0;
	}
	for (int i = 0; i < n; i++) {
		cin >> d[i];
	}
	for (int i = 0; i < n; i++) {
		if (d[i] < 0 && d[i] > 10) {
			cout << "Error !" << endl;
			return 0;
		}
		if (d[i] == 1) a++;
		else if (d[i] == 5) b++;
		else if(d[i] == 10) c++;
	}
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	return 0;
}
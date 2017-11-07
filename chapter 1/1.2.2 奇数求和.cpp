#include <iostream>
using namespace std;

void add(int x, int n) {
	int sum = 0;
	for ( ; x <= n; x += 2)
	{
		sum += x;
	}
	cout << sum << endl;
}

int main() {
	int n, m;
	cin >> m >> n;
	if (0 <= m && m <= n && n <= 300) {
		if(m %2 == 0) add(m + 1, n);
		else add(m, n);
		return 0;
	}
	else {
		cout <<"Error !"<<endl;
		return 0;
	}
}
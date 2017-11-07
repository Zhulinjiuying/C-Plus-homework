#include <iostream>
using namespace std;

int domino(int n)
{
    int s, sum = 0;
    for (int i = 1; i <= n; i++) {
        if (1 == i) s = 3;
        else s = 2;
        if (n - i) s *= domino(n - i);
        sum += s;
        if (n == i) return sum;
    }
    return s;
}

int main()
{
    while (1) {
        int n;
        cin >> n;
        if (-1 == n) break;
        if (0 == n) cout << 1 << endl;
        else if (n % 2 != 0) cout << 0 << endl;
        else {
            cout << domino(n / 2) << endl;
        }
    }
    return 0;
}
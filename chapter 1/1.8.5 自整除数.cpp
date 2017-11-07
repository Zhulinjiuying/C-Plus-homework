#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    if (n < 10 || n > 100) {
        cout << "Error" << endl;
        return 0;
    }
    for (int i = 10; i <= n; i++) {
        m = i % (i / 10 + i - (i / 10) * 10);
        if (m == 0)
            cout << i << endl;
    }
    return 0;
}
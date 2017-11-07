#include <iostream>
#include <iomanip>
using namespace std;

int exchange(int n, int m, int a[5][5], int b[5]);

int main() {
    int a[5][5], b[5], n, m;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> a[i][j];
    cin >> n >> m;
    if (exchange(n, m, a, b) == 0) {
        cout << "error" << endl;
        return -1;
    }
    else {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++)
                cout << setw(4) << a[i][j];
            cout << endl;
        }
    }
    return 0;
}

int exchange(int n, int m, int a[5][5], int b[5]) {
    if (n > 5 || m > 5 || n < 0 || m < 0) {
        return 0;
    }
    else {
        for (int i = 0; i < 5; i++) {
            b[i] = a[n][i];
            a[n][i] = a[m][i];
            a[m][i] = b[i];
        }
        return 1;
    }
}
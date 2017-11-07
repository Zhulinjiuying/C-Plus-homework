#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int id = 0, n = 0, c[4][1];
    char a[4][100];
    double b[4][100], sum = 0, d[3] = { 0.0 };
    for (int i = 0; i < 3; i++) {
        cin >> id >> n;
        c[id][0] = n;
        for (int j = 0; j < n; j++)
            cin >> a[id][j] >> b[id][j];
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < c[i + 1][0]; j++) {
            sum += b[i + 1][j];
        }
        cout << i + 1 << ' ' << fixed << setprecision(2) << sum << endl;
        sum = 0;
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < c[i + 1][0]; j++) {
            switch (a[i + 1][j]) {
            case 'A':
                d[0] += b[i + 1][j];
                break;
            case 'B':
                d[1] += b[i + 1][j];
                break;
            case 'C':
                d[2] += b[i + 1][j];
                break;
            }
        }
    }
    cout << 'A' << ' ' << fixed << setprecision(2) << d[0] << endl;
    cout << 'B' << ' ' << d[1] << endl;
    cout << 'C' << ' ' << d[2] << endl;
    return 0;
}
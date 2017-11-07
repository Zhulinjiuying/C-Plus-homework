#include <iostream>
using namespace std;

int main() {
    int m, flag, a[100], b[100];
    int i = 0;
    double sum = 200.0;
    flag = 0;
    m = 1;
    while (cin >> a[i] >> b[i]) i++;
    for (int j = 0; j < i; j++) {
        if (a[j] < 10 || a[j] > 50 || b[j] < 1 || b[j] > 20) {
            return -1;
        }
        if (a[j] == sum) {
            cout << m << endl;
            return 0;
        }
        m = 2;
        while (m <= 20) {
            if (a[j] * m >= sum * (1 + b[j] * 0.01)) {
                flag = 1;
                break;
            }
            sum *= (1 + b[j] * 0.01);
            m++;
        }
        if (flag == 1) cout << m << endl;
        else cout << "Impossible" << endl;
        flag = 0;
        sum = 200.0;
    }
    return 0;
}
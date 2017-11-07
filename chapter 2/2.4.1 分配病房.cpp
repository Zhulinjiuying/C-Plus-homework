#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, a[50], temp_i;
    double m, b[50], temp_d;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (b[j] < b[j + 1]) {
                temp_i = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp_i;
                temp_d = b[j + 1];
                b[j + 1] = b[j];
                b[j] = temp_d;
            }
    bool f = false;
    for (int i = 0; i < n; i++) {
        if (b[i] >= m) {
            f = true;
            if (a[i] < 100)
                if (a[i] < 10)
                    cout << "00";
                else
                    cout << '0';
            cout << a[i] << ' ' << fixed << setprecision(1) << b[i] << endl;
        }
    }
    if (f == false)
        cout << "None." << endl;
    return 0;
}
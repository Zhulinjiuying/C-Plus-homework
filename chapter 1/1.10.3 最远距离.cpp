#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int n;
    double x[100], y[100];
    cin >> n;
    double sum, max = 0;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i < n; i++)
        for (int j = 1; j < n; j++)
            if (i != j) {
                sum = sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2));
                if (max < sum) max = sum;
            }
    cout << fixed << setprecision(4) << max << endl;
    return 0;
}
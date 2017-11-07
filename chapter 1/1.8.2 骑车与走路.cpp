#include <iostream>
using namespace std;

int main() {
    int time_w, time_b, n;
    double a[100];
    cin >> n;
    if (n <= 0) {
        cout << "Error" << endl;
        return 0;
    }
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] <= 0) {
            cout << "Error" << endl;
            return 0;
        }
    }
    for (int i = 0; i < n; i++) {
        time_b = 27 + 23 + a[i] / 3.0;
        time_w = a[i] / 1.2;
        if (time_b > time_w) cout << "Walk" << endl;
        else if (time_b == time_w)  cout << "All" << endl;
        else cout << "Bike" << endl;
    }
    return 0;
}
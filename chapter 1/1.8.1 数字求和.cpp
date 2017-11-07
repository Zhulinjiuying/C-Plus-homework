#include <iostream>
using namespace std;

int main() {
    int sum = 0, a[6];
    for (int i = 0; i <= 5; i++) {
        cin >> a[i];
    }
    for (int i = 0; i <= 5; i++) {
        if (a[i] < 0 || a[i] >= 100) {
            cout << "Error" << endl;
            return 0;
        }
        while (i <= 4) {
            if (a[0] > a[i + 1]) sum += a[i + 1];
            break;
        }
    }
    cout << sum << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n, m, a[50], buf_1, buf_2;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        buf_1 = a[i];
        a[i] = a[n - m + i];
        for (int k = n - m + i; k < n - 1; k++) {
            a[k] = a[k + 1];
        }
        a[n - 1] = buf_1;
        for (int j = i; j < n - 1; j++) {
            buf_2 = a[j + 1];
            a[j + 1] = buf_1;
            buf_1 = buf_2;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
    return 0;
}
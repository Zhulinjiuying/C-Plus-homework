#include <iostream>
using namespace std;

int main() {
    int a[100], b[100];
    int n, temp, t = 1;
    bool flag = false;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (a[j] > a[j + 1]) {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
                temp = b[j + 1];
                b[j + 1] = b[j];
                b[j] = temp;
            }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            if ((a[i] < a[j] && b[i] < b[j]) || (a[i] == a[j] && b[i] < b[j]) || (a[i] < a[j] && b[i] == b[j]))
                flag = true;
        if (flag == false && t == 1) {
            cout << '(' << a[i] << ',' << b[i] << ')';
            t--;
        }
        else if (flag == false && t != 1) {
            cout << ',' << '(' << a[i] << ',' << b[i] << ')';
        }
        flag = false;
    }
    return 0;
}
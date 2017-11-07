#include <iostream>
using namespace std;

int main() {
    int n, k, a[1000];
    int flag = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
        for (int j = i - 1; j >= 0; j--) {
            if (i != j) {
                if (k == a[i] + a[j]) flag = 1;
            }
        }
    if (flag == 1) cout << "yes";
    else cout << "no";
    return 0;
}
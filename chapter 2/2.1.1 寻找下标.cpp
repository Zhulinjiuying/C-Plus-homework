#include <iostream>
using namespace std;

int main() {
    int n, max, a[100];
    int flag = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int j = 0;
    while (j < n) {
        if (a[j] == j) {
            max = j;
            flag = 1;
            break;
        }
        j++;
    }
    if (flag == 1) cout << max << endl;
    else cout << 'N' << endl;
    return 0;
}
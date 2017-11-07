#include <iostream>
using namespace std;

int main() {
    int n, m, a[100][100];
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    for (int i = 0; i <= m + n; i++) {
        int sum = i;
        int k = 0;
        while (sum >= 0) {
            if (sum < m && k < n)
                cout << a[k][sum] << endl;
            sum--;
            k++;
        }
    }
    return 0;
}